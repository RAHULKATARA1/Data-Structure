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
int main(){
    int arr[] = {1,3,5,6,34,12,10,45};
    int size = 8;
    int x = 18;
    bool ans = twosum(arr, size , x);
    if(ans== false){
        cout<<"keypair is not found "<<endl;
    }
    else{
        cout<<"keypair is found "<< endl;
    }
    return 0;
}