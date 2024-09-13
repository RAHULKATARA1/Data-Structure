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

// To insert a new value into the Binary Search Tree (BST)
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

// To take user input and create the Binary Search Tree (BST)
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

// Level-order traversal (Breadth-First Search) of the BST
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

// Preorder traversal: NLR (Node, Left, Right)
void preorder(Node* root){
    if(root == NULL)
    return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder traversal: LNR (Left, Node, Right)
void inorder(Node* root){
    if(root == NULL)
    return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Postorder traversal: LRN (Left, Right, Node)
void postorder(Node* root){
    if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// Minimum value in a BST 
int minvalue(Node* root){
    if(root == NULL){
        cout << "Tree is empty, no minimum value." << endl;
        return -1;  // Return -1 or any other indicator value
    }
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;  // Return the data, not the node itself
}

// Maximum value in a BST
int maxvalue(Node* root){
    if(root == NULL){
        cout << "Tree is empty, no maximum value." << endl;
        return -1;  // Return -1 or any other indicator value
    }
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;  // Return the data, not the node itself
}

// Search for a value in the BST
bool searchinBst(Node* root, int target){
    // Base case
    if(root == NULL){
        return false;
    }
    if(root->data == target){
        return true;
    }
    // Recursive calls for left or right subtree
    if(target > root->data){
        return searchinBst(root->right, target);
    }
    else{
        return searchinBst(root->left, target);
    }
}

int main(){
    Node* root = NULL;
    createBST(root);

    cout << "Level Order Traversal:" << endl;
    levelOrderTraversal(root);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    int minNode = minvalue(root);
    if(minNode == -1){
        cout << "There is no node in the tree, so there is no minimum value." << endl;
    }
    else{
        cout << "The minimum value: " << minNode << endl;
    }

    int maxNode = maxvalue(root);
    if(maxNode == -1){
        cout << "There is no node in the tree, so there is no maximum value." << endl;
    }
    else{
        cout << "The maximum value: " << maxNode << endl;
    }

    int t;
    cout << "Enter the target (-1 to stop): " << endl;
    cin >> t;

    // Fix: Ask for new input after each search to prevent an infinite loop
    while(t != -1){
        bool ans = searchinBst(root, t);
        if(ans){
            cout << "Found" << endl;
        }
        else{
            cout << "Not Found" << endl;
        }
        cout << "Enter the target (-1 to stop): " << endl;  // Prompt again for input
        cin >> t;
    }

    return 0;
}
