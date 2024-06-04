#include<iostream>
using namespace std;
void checkevenodd(int num){
    if(num<1){
        cout<<"number is invalid"<<endl;
    }
    else if(num%2==0){
        cout<< num << ":" << "is an even numbe "<< endl;
    }
    else{
        cout<< num << ":" << "is an odd n umber "<< endl;
    }
}
int main(){
    int number;
    cin >> number;
    checkevenodd(number);
        return 0;
}