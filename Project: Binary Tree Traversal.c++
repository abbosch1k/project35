#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node* root=new Node{1,nullptr,nullptr};
    root->left=new Node{2,nullptr,nullptr};

    inorder(root);
}
