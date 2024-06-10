#include<iostream>
using namespace std;
void countZeroOne(int arr[], int size){
    int ZeroCount=0;
    int OneCount=0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            ZeroCount++;
        }
        if(arr[i]==1){
            OneCount++;
        }
    }
    cout<<"Number of Zeros in an Array : "<< ZeroCount<< endl;
    cout<< "Number of Ones in an Array : "<< OneCount<< endl;
}
int main(){
    int arr[]={0,0,1,1,1,0,0,0,0,1};
    int size = 10;
    countZeroOne(arr, size);
    return 0;
}