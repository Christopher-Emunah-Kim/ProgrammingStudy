#include <iostream>

struct Node
{
	int data;
	Node* left;
	Node* right;
};

class BinaryTree
{
private:
	Node* root = nullptr;

	void PreOrderTraversal(Node* node)
	{
		if (node == nullptr) return;
		std::cout << node->data << " ";
		PreOrderTraversal(node->left);
		PreOrderTraversal(node->right);
	}

	void InOrderTraversal(Node* node)
	{
		if (node == nullptr) return;
		InOrderTraversal(node->left);
		std::cout << node->data << " ";
		InOrderTraversal(node->right);
	}

	void PostOrderTraversal(Node* node)
	{
		if (node == nullptr) return;
		PostOrderTraversal(node->left);
		PostOrderTraversal(node->right);
		std::cout << node->data << " ";
	}

	void DeleteTreeNodes(Node* node)
	{
		if (node == nullptr) return;
		DeleteTreeNodes(node->left);
		DeleteTreeNodes(node->right);
		delete node; 
	}

public:
	BinaryTree() = default;

	~BinaryTree()
	{
		DeleteTreeNodes(root);
	}

	void InitTree(int data)
	{
		if (root != nullptr) {
			DeleteTreeNodes(root);
		}
		root = new Node{ data, nullptr, nullptr };
	}

	Node* AddChild(Node* parent, int data, bool isLeft)
	{
		if (parent == nullptr) {
			return nullptr;
		}

		Node* newNode = new Node{ data, nullptr, nullptr };

		if (isLeft) {
			parent->left = newNode;
		}
		else {
			parent->right = newNode;
		}

		return newNode;
	}

	void PreOrder()
	{
		PreOrderTraversal(root);
	}

	void InOrder()
	{
		InOrderTraversal(root);
	}

	void PostOrder()
	{
		PostOrderTraversal(root);
	}

	Node* GetRoot()
	{
		return root;
	}
};
