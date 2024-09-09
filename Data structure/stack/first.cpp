#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation of stack 
    stack<int> st;

    // insertion in stack
    st.push(10);
     st.push(20);
      st.push(30);
       st.push(40);
        st.push(50);

        // size of stack
        cout<<"size of stack"<< st.size()<<endl;
        // romve
        st.pop();
        // stack top
        cout<<"print stack "<<st.top()<<endl;
    return 0;
}