#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"enter the value of n :-  ";
    cin>>n;
    int fact = factorial(n);
    cout<<"output is :-  "<<fact<<endl;

    return 0;
}