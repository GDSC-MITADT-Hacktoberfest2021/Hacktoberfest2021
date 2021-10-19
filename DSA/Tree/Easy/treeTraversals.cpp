#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

//Creating the tree
Node* insertBST(Node* root, int val)
{
    if(root==NULL){
        Node* n = new Node(val);
        return n;
    }
    
    if(val < root->data){
        root->left = insertBST(root->left,val);
    }
    else{
        //if(val > root->data)
        root->right = insertBST(root->right,val);
    }
    return root;
}

void printPostorder(Node* node)
{
	if (node == NULL)
		return;

	printPostorder(node->left);
	printPostorder(node->right);
	cout << node->data << " ";
}

void printInorder(Node* node)
{
	if (node == NULL)
		return;

	printInorder(node->left);
	cout << node->data << " ";
	printInorder(node->right);
}

void printPreorder(Node* node)
{
	if (node == NULL)
		return;

	cout << node->data << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

int main()
{
	Node *root = NULL;
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements: ";
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   root = insertBST(root,arr[0]);
   for(int i=1;i<n;i++)
   {
       insertBST(root,arr[i]);
   }

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	cout << "\nInorder traversal of binary tree is \n";
	printInorder(root);

	cout << "\nPostorder traversal of binary tree is \n";
	printPostorder(root);

	return 0;
}
