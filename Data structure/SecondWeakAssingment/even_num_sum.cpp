#include<iostream>
using namespace std;
void printeven_number_sum(int num){
    int  sum=0;
    for(int i=2 ; i<=num; i=i+2){
        sum= sum+i;
    }
    cout<<"final sum "<< sum;
}
int main(){
    int number;
cin>> number;
printeven_number_sum(number);
cout<<endl;
}