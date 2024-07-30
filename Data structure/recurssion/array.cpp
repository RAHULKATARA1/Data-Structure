#include<iostream>
using namespace std;
void printarray(int arr[],int size , int index){
    // base case
    if(index>=size){
        return ;

    }
    // processing
    cout<<arr[index]<<" ";

    // recursive call
    printarray(arr, size , index+1);
    cout<<endl;

    // processing reverse order
    cout<<"reverse order"<< " ";

      cout<<arr[index]<<" ";

}
int main(){
    int arr[]={10,20,30,40,50};
    int size = 5;
    int index = 0;
    printarray(arr,size,index);
    return 0;
}