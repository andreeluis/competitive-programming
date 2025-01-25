#include <iostream>
using namespace std;

string strip(string str) {
	return str.substr(str.find_first_not_of(" "), str.find_last_not_of(" ") + 1);
}

class Node {
	public:
		int value;
		Node* left;
		Node* right;

		Node() {
			this->value = -1;
			this->left = NULL;
			this->right = NULL;
		}

		Node(int value) {
			this->value = value;
			this->left = NULL;
			this->right = NULL;
		}

		string getValue() {
			return to_string(this->value) + " ";
		}
};

class Tree {
	public:
		Node* root;

		Tree() {
			this->root = NULL;
		}

		void insert(int value) {
			this->root = this->insert(this->root, value);
		}

		string printPreOrder() {
			return strip(this->printPreOrder(this->root));
		}

		string printInOrder() {
			return strip(this->printInOrder(this->root));
		}

		string printPostOrder() {
			return strip(this->printPostOrder(this->root));
		}

	private:
		Node* insert(Node* node, int value) {
			if (node == NULL) {
				node = new Node(value);
			} else if (node->value > value) {
				node->left = this->insert(node->left, value);
			} else if (node->value < value) {
				node->right = this->insert(node->right, value);
			}

			return node;
		}

		string printPreOrder(Node* node) {
			if (node == NULL) {
				return "";
			}

			return  node->getValue() + printPreOrder(node->left) + printPreOrder(node->right);
		}

		string printInOrder(Node* node) {
			if (node == NULL) {
				return "";
			}

			return printInOrder(node->left) + node->getValue() + printInOrder(node->right);
		}

		string printPostOrder(Node* node) {
			if (node == NULL) {
				return "";
			}

			return printPostOrder(node->left) + printPostOrder(node->right) + node->getValue();
		}
};

int main() {
	int c, n, temp;
	cin >> c;

	for (int i = 1; i <= c; i++) {
		cin >> n;
		Tree tree = Tree();

		// insert n values to the tree
		for (int j = 0; j < n; j++) {
			cin >> temp;
			tree.insert(temp);
		}

		cout << "Case " << i << ":" << endl;
		cout << "Pre.: " << tree.printPreOrder() << endl;
		cout << "In..: " << tree.printInOrder() << endl;
		cout << "Post: " << tree.printPostOrder() << endl << endl;
	}

	return 0;
}