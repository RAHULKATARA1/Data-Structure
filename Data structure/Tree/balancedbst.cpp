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

// Find the maximum value node in a subtree
Node* maxvalue(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

// Delete a node from the Binary Search Tree (BST)
Node* deletefrombst(Node* root, int target){
    // target ko find kro
    // delete the target
    if(root == NULL){
        return NULL;
    }

    if(root->data == target){
        //ab delete krenge
        // 4 case

        //case1->leaf node
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //case2->left is non-null and right is null
        else if(root->left != NULL && root->right == NULL){
            Node* childsubtree = root->left;
            delete root;
            return childsubtree;
        }

        //case3->left is null and right is non-null
        else if(root->left == NULL && root->right != NULL){
            Node* childsubtree = root->right;
            delete root;
            return childsubtree;
        }

        //case4-> left and right both are non-null
        // most important

        else{
            //a-> left subtree ki max value leke aao
            Node* maxi = maxvalue(root->left);
            //replace kro
            root->data = maxi->data;

            // delete actual maxi wali node
            root->left = deletefrombst(root->left, maxi->data);
            return root;
        }
    }
    else if (root->data > target){
        //left main jao
        root->left = deletefrombst(root->left, target);
    }
    else {
        // right main jao
        root->right = deletefrombst(root->right, target);
    }
    return root;
}
Node* bstfrominorder( int inorder[],int s, int e){
    // base case
    if(s>e){
        return NULL;
    }
    //case solve krna h 
    int mid = (s+e)/2;
    int element = inorder[mid];
    Node* root = new Node(element);
    // baki recursion dekh lega
    root->left = bstfrominorder(inorder,s,mid-1);
    root->right = bstfrominorder(inorder,mid+1,e);
    return root;
    
    
}

int main(){
    int inorder[]={10,20,30,40,50,60,70};
    int size = 7;
    int start = 0;
    int end = size-1;
    Node* root = bstfrominorder(inorder,start,end);
    levelOrderTraversal(root);
//     Node* root = NULL;
//     createBST(root);

//     cout << "Level Order Traversal:" << endl;
//     levelOrderTraversal(root);

//     int target;
//     cout << "target:-  " << endl;
//     cin >> target;
//     while(target != -1){
//         root = deletefrombst(root, target);
//         cout << endl << "printing level order traversal : - " << endl;
//         levelOrderTraversal(root);
//         cout << "enter the target : - " << endl;
//         cin >> target;
//     }

     return 0;
      }
