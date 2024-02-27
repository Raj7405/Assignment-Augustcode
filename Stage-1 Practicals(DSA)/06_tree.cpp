#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

//Insertion of Node or element
Node* insertInTOBST(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if( d > root -> data){
        root->right = insertInTOBST(root->right, d);
    }
    else{
        root->left = insertInTOBST(root->left, d);
    }
    return root;
}


void takeInput(Node *&root){
    int data;
    cin >> data;

    while (data != -1){
        root = insertInTOBST(root, data);
        cin >> data;
    }
}

//Inorder traversal
void inorder(Node* root) {
   
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

// preorder traversal
void preorder(Node* root) {
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

// postorder traversal
void postorder(Node* root) {
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

//To print the Binary Search Tree
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            
            cout << endl;
            if(!q.empty()) { 
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
int main(){
    Node* root = NULL;

    cout << "enter data to create BST " << endl;
    takeInput(root);

    cout << "Printing BST: " <<endl;
    levelOrderTraversal(root);

    cout << "inorder traversal is:  ";
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root); 

    return 0;
}