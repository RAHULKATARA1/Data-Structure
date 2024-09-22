#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Print function
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Insert at head
void inserthead(Node*& head, Node*& tail, int data) {
    Node* Newnode = new Node(data);
    if (head == NULL) {
        head = Newnode;
        tail = Newnode;
    } else {
        Newnode->next = head;
        head = Newnode;
    }
}

// Insert at the tail
void inserttail(Node*& head, Node*& tail, int data) {
    Node* Newnode = new Node(data);
    if (tail == NULL) {
        head = Newnode;
        tail = Newnode;
    } else {
        tail->next = Newnode;
        tail = Newnode;
    }
}

// Insert at a given position
void insertpostion(Node*& head, Node*& tail, int data, int position) {
    if (position == 1) {
        inserthead(head, tail, data);
        return;
    }

    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }

    if (position == length + 1) {
        inserttail(head, tail, data);
        return;
    }

    Node* Newnode = new Node(data);
    Node* prev = NULL;
    Node* curr = head;

    while (position > 1 && curr != NULL) {
        position--;
        prev = curr;
        curr = curr->next;
    }

    if (prev != NULL) {
        prev->next = Newnode;
        Newnode->next = curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Insertions
    inserthead(head, tail, 30);
    inserttail(head, tail, 40);
    inserthead(head, tail, 21);
    inserttail(head, tail, 45);
    insertpostion(head, tail, 60, 3);

    // Final print of the linked list
    cout << "Final Linked List: ";
    print(head);

    return 0;
}
