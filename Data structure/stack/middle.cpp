#include<iostream>
#include<stack>
using namespace std;
int solve(stack<int>&st , int &pos){
    // base case
    if(pos == 1){
        return st.top();
    }
    // solve 1 case
    pos--;
    int temp = st.top();
    st.pop();
    // recursion
    return solve(st, pos);
    st.push(temp);
}
int middle(stack<int>&st){
    int size = st.size();
    int pos=0;
    // stack is empty
    if(st.empty()){
        cout<<"stack is empty , No middle element is present  "<<endl;
        return -1;
    }
    else{
        if(size & 1){
            pos = size/2 + 1;
        }
        else{
            pos = size/2;
        }
    }
    return solve(st,pos);
}
int  main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    
    int k = middle(st);
    cout<<"middle element is :->   "<<k<<endl;
    return 0;
}