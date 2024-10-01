#include<iostream>
using namespace std;

class TrieNode{
    public:
    char value;
    TrieNode* childeren[26];  // Fixed size array of 26 elements
    bool isTerminal;

    TrieNode(char val){
        this->value = val;
        for(int i=0; i<26; i++){
            childeren[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void insertword(TrieNode* root, string word){
    // base case
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root->childeren[index] != NULL){
        // present
        child = root->childeren[index];
    }
    else{
        // absent
        child = new TrieNode(ch);
        root->childeren[index] = child;
    }
    // recursion
    insertword(child, word.substr(1));
}

// Helper function to print the trie
void printTrie(TrieNode* root, string wordSoFar) {
    // If the node is a terminal node, print the word
    if(root->isTerminal) {
        cout << wordSoFar << endl;
    }

    // Recursively print all the children
    for(int i = 0; i < 26; i++) {
        if(root->childeren[i] != NULL) {
            char childChar = 'a' + i;
            printTrie(root->childeren[i], wordSoFar + childChar);
        }
    }
}

int main(){
    TrieNode* root = new TrieNode('-');
    insertword(root, "dona");
    insertword(root, "don");
    insertword(root, "dog");

    // Call the printTrie function to display the words stored in the trie
    cout << "Words in the Trie:" << endl;
    printTrie(root, "");
    
    return 0;
}
