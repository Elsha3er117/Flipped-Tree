#include <iostream>
using namespace std;

// Data structure to store a binary tree node
class Node
{
    public:
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

// Function to perform preorder traversal on a given binary tree
void preorder(Node* root)
{
    if (root == nullptr) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Function to convert a given binary tree into its mirror
void flip(Node* root)
{
    // base case: if the tree is empty
    if (root == nullptr) {
        return;
    }
    if (root->left== nullptr){
        if (root->right== nullptr){
            preorder (root);
        }
    }
    // flip left subtree
    flip(root->left);

    // flip right subtree
    flip(root->right);

    // swap left subtree with right subtree
    swap(root->left, root->right);
}

int main()
{

    Node* root1 = new Node(1);
    //root1->left = new Node(2);
   // root1->right = new Node(3);
    //root1->left->left = new Node(4);
   // root1->left->right = new Node(5);
    cout << "Display the preorder 1st tree content: " << endl;
    preorder(root1);
    cout<<endl;
    cout << "Display the preorder flipped 1st tree content: " << endl;
    flip(root1);
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;

    Node* root2 = new Node(4);
    root2->left = new Node(1);
    root2->right = new Node(5);
    root2->left->right = new Node(2);
    root2->right->right = new Node(7);
    cout << "Display the preorder 2nd tree content: " << endl;
    preorder(root2);
    cout<<endl;
    cout << "Display the preorder flipped 2nd tree content: " << endl;
    flip(root2);
    preorder(root2);
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;

    Node* root3 = new Node(5);
    root3->left = new Node(4);
    root3->right = new Node(7);
    cout << "Display the preorder 3rd tree content: " << endl;
    preorder(root3);
    cout<<endl;
    cout << "Display the preorder flipped 3rd tree content: " << endl;
    flip(root3);
    preorder(root3);
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;

    Node* root4 = new Node(20);
    root4->left = new Node(1);
    root4->right = new Node(200);
    root4->right->left = new Node(100);
    root4->right->right = new Node(300);
    cout << "Display the preorder 4th tree content: " << endl;
    preorder(root4);
    cout<<endl;
    cout << "Display the preorder flipped 4th tree content: " << endl;
    flip(root4);
    preorder(root4);
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;

    Node* root5 = new Node(10);
    root5->left = new Node(4);
    root5->right = new Node(20);
    root5->left->left = new Node(1);
    root5->left->right = new Node(8);
    root5->right->left = new Node(15);
    cout << "Display the preorder 5th tree content: " << endl;
    preorder(root5);
    cout<<endl;
    cout << "Display the preorder flipped 5th tree content: " << endl;
    flip(root5);
    preorder(root5);
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;

    return 0;
}
