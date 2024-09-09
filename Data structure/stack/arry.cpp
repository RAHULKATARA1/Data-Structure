#include<iostream>
using namespace std;
class stack {
public:
    int *arr;
    int size;
    int top;

    stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    // Push
    void push(int data) {
        if (top == size - 1) {
            cout << "Stack overflow" << endl;
        } else {
            top++;
            arr[top] = data;
        }
    }
    // Pop
    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }
    // Fetch top
    int gettop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }
    // Display stack elements
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n,value;
    stack st(n);
    cout<<"enter the value of size :- ";
    cin>>n;
    cout<<"enter the elements in stack :-";
    for(int i =0; i<n; i++){
        cin>>value;
        st.push(value);
    }
    st.display();
    return 0;
}