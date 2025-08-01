struct Node {
	int value;
	Node* prev;
	Node* next;
};

class LinkedList {
private:
	Node* head; 

public:
	LinkedList() {
		head = new Node;
		head->value = 0; 
		head->prev = nullptr;
		head->next = nullptr;
	}
.
	~LinkedList() {
		ClearList(); 
		delete head; 
		head = nullptr;
	}

	Node* InsertNodeRight(Node* targetNode, int value) {
		if (targetNode == nullptr) {
			return nullptr;
		}

		Node* newNode = new Node;
		newNode->value = value;

		Node* nextNode = targetNode->next;

		newNode->next = nextNode;
		newNode->prev = targetNode;

		targetNode->next = newNode;

		if (nextNode) {
			nextNode->prev = newNode;
		}

		return newNode;
	}

	Node* InsertNodeLeft(Node* targetNode, int value) {
		if (targetNode == nullptr) {
			return nullptr;
		}

		Node* newNode = new Node;
		newNode->value = value;

		Node* prevNode = targetNode->prev;

		newNode->prev = prevNode;
		newNode->next = targetNode;

		targetNode->prev = newNode;

		if (prevNode) {
			prevNode->next = newNode;
		}

		return newNode;
	}

	void AppendNode(int value) {
		Node* tail = head;
		while (tail->next != nullptr) {
			tail = tail->next;
		}
		InsertNodeRight(tail, value);
	}

	bool DeleteNode(Node* targetNode) {
		if (targetNode == nullptr || targetNode == head) {
			return false;
		}

		Node* prevNode = targetNode->prev;
		Node* nextNode = targetNode->next;

		prevNode->next = nextNode;
		if (nextNode) {
			nextNode->prev = prevNode;
		}

		delete targetNode;
		return true;
	}

	Node* FindNodeByIndex(int index) {
		if (index < 0) {
			return nullptr;
		}

		Node* currentNode = head->next; 
		int currentIndex = 0;

		while (currentNode != nullptr) {
			if (currentIndex == index) {
				return currentNode;
			}
			currentNode = currentNode->next;
			currentIndex++;
		}

		return nullptr;
	}

	int GetNodeIndex(Node* targetNode) {
		if (targetNode == nullptr) {
			return -1;
		}

		Node* currentNode = head->next;
		int currentIndex = 0;

		while (currentNode != nullptr) {
			if (currentNode == targetNode) {
				return currentIndex;
			}
			currentNode = currentNode->next;
			currentIndex++;
		}

		return -1;
	}

	int GetListCount() const {
		int count = 0;
		Node* currentNode = head->next;
		while (currentNode != nullptr) {
			count++;
			currentNode = currentNode->next;
		}
		return count;
	}

	void ClearList() {
		Node* currentNode = head->next;
		while (currentNode != nullptr) {
			Node* nextNode = currentNode->next;
			delete currentNode;
			currentNode = nextNode;
		}
		head->next = nullptr;
	}
};