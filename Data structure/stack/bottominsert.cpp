#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &st, int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int temp = st.top();
    st.pop();

    insertatbottom(st,element);
    st.push(temp);
   

}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    int element = 400;
    insertatbottom(st, element);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
    return 0;
}