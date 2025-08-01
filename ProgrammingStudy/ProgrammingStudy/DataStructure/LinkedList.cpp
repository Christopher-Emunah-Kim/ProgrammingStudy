

struct Node
{
	int value;
	Node* prev;
	Node* next;
};

Node* head;

void InitList()
{
	head = new Node;
	head->prev = nullptr;
	head->next = nullptr;
}

Node* InsertNodeRight(Node* targetNode, Node* newNode)
{
	if (targetNode == nullptr || newNode == nullptr)
	{
		return nullptr;
	}

	Node* nextNode;

	nextNode = targetNode->next;
	newNode->next = nextNode;

	newNode->prev = targetNode;
	targetNode->next = newNode;

	if (nextNode)
	{
		nextNode->prev = newNode;
	}

	return newNode;

}

Node* InsertNodeLeft(Node* targetNode, Node* newNode)
{
	if (targetNode == nullptr || newNode == nullptr)
	{
		return nullptr;
	}
	Node* prevNode;

	prevNode = targetNode->prev;
	newNode->prev = prevNode;

	newNode->next = targetNode;
	targetNode->prev = newNode;

	if (prevNode)
	{
		prevNode->next = newNode;
	}

	return newNode;
}

void AppendNode(Node* newNode)
{
	if (head == nullptr || newNode == nullptr)
	{
		return;
	}

	Node* tail = head;

	while (tail->next != nullptr)
	{
		tail = tail->next;
	}

	InsertNodeRight(tail, newNode);
}

bool DeleteNode(Node* targetNode)
{
	if (targetNode == nullptr || head == nullptr)
	{
		return false;
	}

	Node* prevNode = targetNode->prev;
	Node* nextNode = targetNode->next;

	prevNode->next = nextNode;

	if (nextNode)
	{
		nextNode->prev = prevNode;
	}

	delete targetNode;
	return true;
}


Node* FindNodeByIndex(int idx)
{
	if (head == nullptr || idx < 0)
	{
		return nullptr;
	}

	int currentIndex = 0;

	for (Node* currentNode = head; currentNode != nullptr; currentNode = currentNode->next)
	{
		if (currentIndex == idx)
		{
			return currentNode;
		}
		currentIndex++;
	}

	return nullptr;
}


int GetNodeIndex(Node* targetNode)
{
	if (head == nullptr || targetNode == nullptr)
	{
		return -1;
	}

	int currentIndex = 0;

	for (Node* currentNOde = head; currentNOde != nullptr; currentNOde = currentNOde->next)
	{
		if (currentNOde == targetNode)
		{
			return currentIndex;
		}
		currentIndex++;
	}

	return -1;

}

int GetListCount()
{
	if (head == nullptr)
	{
		return 0;
	}

	int count = 0;

	for (Node* currentNode = head; currentNode != nullptr; currentNode = currentNode->next)
	{
		count++;
	}

	return count;
}


void ClearList()
{
	if (head == nullptr)
	{
		return;
	}

	while (DeleteNode(head->next))
	{

	}

	delete head;

	head = nullptr;
}
