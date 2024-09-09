#include<iostream>
#include<stack>
using namespace std;

void insertsorted(stack<int> &st, int element){
    // base case
    if(st.empty() || element > st.top()){
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();
// recursiom
    insertsorted(st, element);
    // backtracking
    st.push(temp);
}
void sortstack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp = st.top();
    st.pop();
    // recursion
    sortstack(st);
    insertsorted(st,temp);
}
int main(){
    stack<int>st;
    int n, value;
    int element;
    cout<<"Enter the number of element to insert in stack :-  ";
    cin>>n;
    cout<<"Enter the value of the elments:- "<<endl;
    for(int i=0; i<n; i++){
        cin>>value;
        st.push(value);
    }
    sortstack(st);
    cout<<"stack is :-   "<<endl;
    stack<int>tempstack = st;
    while(!tempstack.empty()){
        cout<<tempstack.top()<<endl; // to print top element
        tempstack.pop(); // to remove top element
    }
    cout<<"Enter the element to be insert in stack";
    cin>>element;
    cout<<endl;
     st.push(element);
     insertsorted(st,element);
     cout<<"inserted in sorted stack is:- "<<endl;
     while(!st.empty()){
        cout<<st.top()<<endl; // to print top element
        st.pop(); // to remove top element
    }
    return 0;
    
}