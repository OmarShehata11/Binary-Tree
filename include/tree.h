struct Node 
{
	int data;
	Node* left;
	Node* right;
};

Node *Root = NULL;


//functions

bool isempty(Node *root);
void insert_node(Node* &root, int data);
void levelTraversal(); // breadth-first .

void preorder(Node *root); //Depth-first <root> <left> <right>
void inorder(Node *root); //Depth-first <left> <root> <right>
void postorder(Node *root); //Depth-first <left> <right> <root>