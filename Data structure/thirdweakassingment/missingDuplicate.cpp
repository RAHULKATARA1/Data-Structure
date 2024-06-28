#include<iostream>
using namespace std;
// visiting method
// void findmissing(int *arr , int n){
//     for(int i=0; i<n; i++){
//         int index = abs(arr[i]);
//         if(arr[index - 1] > 0){
//             arr[index -1] *= -1;
//         }
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]>0)
//         cout<< i+1 <<"  ";
        
//     }
//     cout<<endl;
// }

// sorting and swaping method
void searchmissing(int *arr , int n){
    
    int i=0;
    while(i < n){
        int index = arr[i]-1;
        if(arr[i] != arr[index] ){
            swap(arr[i] , arr[index] );
        }
        else{
            ++i;
        }
    }
    for(int i=0 ; i<n; i++){

        if(arr[i]!= i+1){ 
        cout<<arr[i]<<" ";

        }
    }
    cout<<endl;
}
int main(){
    // int arr[]={1,3,5,3,4};
    int arr[]={1,3,3,3,5};
    int n = sizeof(arr)/sizeof(int);
    // findmissing(arr , n);
    searchmissing(arr , n);
    return 0;
}