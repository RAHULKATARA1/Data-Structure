#include<iostream>
using namespace std;
int fabon(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return fabon(n-1)+fabon(n-2);
    }
}

int main(){
    int n;
    cin>>n;
    int fab = fabon(n);
    cout<<fab<<endl;
   return 0;
}