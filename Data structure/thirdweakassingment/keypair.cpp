#include<iostream>
using namespace std;
bool twosum(int arr[], int size ,int x){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j] == x){
                return true;
            }
        }
    }
    return false;

}
// two pointer appproach
// because above code take large time to run 
// it has a posiblity of run time error
bool keypair(int arr[], int size, int x){
    int s = 0;
    int e = size-1;
    int csum ;
    while(s<e){
        csum = arr[s] + arr[e];
        if(csum == x){
            return true;
        }
        else if(csum<x){
            // right joa
            s++;
        }
        else{
            // left jao
            e--;
        }
    }
    return false;

}
int main(){
    int arr[] = {1,3,5,6,34,12,10,45};
    int size = 8;
    int x = 8;
    sort(arr , arr+size-1);
    bool ans = twosum(arr, size , x);
    if(ans== false){
        cout<<"keypair is not found "<<endl;
    }
    else{
        cout<<"keypair is found "<< endl;
    }

    bool foundsum = keypair( arr, size, x);
    if(foundsum == false){
        cout<< "keypair not found "<< endl;
    }
    else{
        cout<< "two pointer approach ->"<<"  keypair found "<< endl;
    }
    return 0;
}