#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

int height(Node* root){
    if(!root) return 0;
    return 1+max(height(root->left), height(root->right));
}

int main(){
    Node* root=new Node{1,nullptr,nullptr};
    root->left=new Node{2,nullptr,nullptr};

    cout<<height(root);
}
