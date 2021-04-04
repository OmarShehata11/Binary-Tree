#include "../include/tree.h"
#include <queue>
using namespace std;


bool isempty(Node *root)
{
	if ( !root )
		return true;
	else
		return false;
}


void insert_node(Node* &root, int data)
{

	if ( isempty(root) )
		{
			root = new Node;
			root->data = data;
			root->right = NULL;
			root->left = NULL;
		}

	else if ( data <= root->data ) // the large data on the right and the less on the left
	{
		insert_node(root->left, data);
	}

	else 
	{
		insert_node(root->right, data);
	}


}


void levelTraversal() // breadth-first .
{
	if ( !Root )
		cout << "the tree is empty \n";
	else
	{
		queue<Node*> Queue;
		Queue.push(Root);
		cout << " **level start from left to right** " << endl;
		while ( !Queue.empty() )
		{
			Node *node = Queue.front();
			cout << " --> " << node->data ;
			if ( node->left )
				Queue.push(node->left);
			if ( node->right)
				Queue.push(node->right); 
			Queue.pop();
		}
		cout << "\n";
	}


}


void preorder(Node *root) //Depth-first <root> <left> <right>
{
 	if ( !root )
 		return;

 	cout << " --> " << root->data << "  ";
 	preorder(root->left);
 	preorder(root->right);
}


void inorder(Node *root) //Depth-first <left> <root> <right>
{
	if ( !root )
		return;

	inorder(root->left);
	cout << " --> " << root->data << "  ";
	inorder(root->right);
}


void postorder(Node *root) //Depth-first <left> <right> <root>
{
	if ( !root )
		return;

	postorder(root->left);
	postorder(root->right);
	cout << " --> " << root->data << "  ";
}