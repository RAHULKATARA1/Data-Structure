#include<iostream>
using namespace std;
void reversecounting(int n){
    if(n==1){
        cout<<1<<" "<<endl;
        return ;
    }
    cout<<n<<" ";
    reversecounting(n-1);
   
}
int main(){
      int n;
    cout<<"enter the value of n :-  ";
    cin>>n;
    reversecounting(n);
   
    return 0;
}