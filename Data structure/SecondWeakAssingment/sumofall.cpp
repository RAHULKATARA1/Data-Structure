#include<iostream>
using namespace std;
void findsum(int num){
    int sum=0;
    for(int i=1; i<=num ; i++){
        sum=sum+i;
    }
    cout<<sum;
}
int main(){
int number;
cin>> number;
cout<<"print sum of all number";
cout << endl;
findsum(number);
cout<<endl;
}