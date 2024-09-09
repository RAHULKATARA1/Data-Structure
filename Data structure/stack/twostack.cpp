#include<iostream>
using namespace std;
class stack{
public:
int *arr;
int size;
int top1;
int top2;
stack(int size){
    arr = new int[size];
    this->size = size;
    this->top1 = -1;
    this->top2 = size;
}
void push1(int data){
    if(top2-top1==1){
        cout<<"overflow";
    }
    else{
        top1++;
        arr[top1]=data;
    }
}
void push2(int data){
    if(top2-top1==1){
        cout<<"overflow";
    }
    else{
        top2++;
        arr[top2]=data;
    }
}    
void pop1(){
    if(top1==-1){
        cout<<"underflow"<<endl;
    }
    else{
        top1--;
    }
}
void pop2(){
    if(top2==size){
        cout<<"underflow"<<endl;
    }
    else{
        top2++;
    }
}
void print(){
    cout<<endl;
    cout<<"top1 :- "<<top1<<endl;
    cout<<"top2 :- "<<top2<<endl;
    for(int i; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
   
};
int main(){
    int n = 7;
    stack st(n);
    st.print();
    st.push1(10);
    st.print();
     st.push1(20);
    st.print();
     st.push1(30);
    st.print();
     st.push1(40);
    st.print();
    st.push2(70);
    st.print();
     st.push2(80);
    st.print();
     st.push2(90);
    st.print();
    return 0;
}