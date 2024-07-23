#include<iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    else{
        return 2*power(n-1);
    }
}

int main(){
      int n;
    cout<<"enter the value of n :-  ";
    cin>>n;
    int pw = power(n);
    cout<<"output is :-  "<<pw<<endl;
    return 0;
}