#include <iostream>
#include <stack>

using namespace std;

typedef struct node{
    int value;
    struct node *left;
    struct node *right;
}node;

int traverse_tree(node *root){
    int sum = 0;
    stack <node *> stack;
    node *temp = root;
    while(!stack.empty() | temp != NULL){
        if(temp != NULL){
            stack.push(temp);
            temp = temp->left;
        }
        else {
            temp = stack.top();
            stack.pop();
            sum += temp->value;
            temp = temp->right;
        }   
          
    }
    return sum;
}
int main(void){
    node *root = new node;
    node *child = NULL;
    node *temp = child;
    root->value = 5;
    root->left = NULL;
    root->right = NULL;

    child = new node;
    child->value = 4;
    child->left = NULL;
    child->right = NULL;
    root->left = child;
    temp = child;
    
    child = new node;
    child->value = 6;
    child->left = NULL;
    child->right = NULL;
    temp->left = child;

    child = new node;
    child->value = 6;
    child->left = NULL;
    child->right = NULL;
    root->right = child;
    temp = child;

    child = new node;
    child->value = 7;
    child->left = NULL;
    child->right = NULL;
    temp->left = child;

    child = new node;
    child->value = 10;
    child->left = NULL;
    child->right = NULL;
    temp->right = child;
    int sum = traverse_tree(root);

    return 0;
}
    



