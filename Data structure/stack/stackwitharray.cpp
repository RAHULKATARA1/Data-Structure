#include<iostream>
#include<string>
using namespace std;

class stack{
    public:
    char *arr;
    int size;
    int top;
    stack(int size){
        arr = new char[size];
        this->size = size;
        this->top = -1; // Initialize top to -1
    }
    //push function
    void push(char data){
        if(top==size-1){
            cout<<"stack is over flow"<<endl;
            return;
        }
        else{
            arr[++top]=data; // Increment top before assigning data
        }
    }
    // pop function
    void pop(){
        if(top==-1){
            cout<<" stack is underflow "<<endl;

        }
        else{
            top--;
        }
    }
    // size
    int getsize(){
        return top+1;
    }
    // fetch top
    char gettop(){
        if(top==-1){
            cout<<"stack is empty "<<endl;
            return ' '; // Return a default value or throw an exception
        }
        else{
            return arr[top];

        }
    }
    // check if empty
    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }

};
int main(){
    string str = "ABCD";
    stack st(str.length()); // Create a stack with size equal to str.length()
    for(auto ch: str){
        st.push(ch);
    }
    while(!st.isempty()){
        cout<<st.gettop();
        st.pop();
    }

    return 0;
}