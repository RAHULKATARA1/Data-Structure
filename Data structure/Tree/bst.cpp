#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

//to insert a new value into the  (BST)
Node* insertIntoBst(Node* root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(data > root->data){
        root->right = insertIntoBst(root->right, data);
    }
    else{
        root->left = insertIntoBst(root->left, data);
    }
    return root;
}

// to take user input and create the  (BST)
void createBST(Node* &root){
    cout << "Enter the data (-1 to stop): " << endl;
    int data;
    cin >> data;
    while(data != -1){
        root = insertIntoBst(root, data);
        cout << "Enter the data (-1 to stop): " << endl;
        cin >> data;
    }
}

//  level-order traversal  of the BST
void levelOrderTraversal(Node* root) {
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* root = NULL;
    createBST(root);
    levelOrderTraversal(root);
    return 0;
}
