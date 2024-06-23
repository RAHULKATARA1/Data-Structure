#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>&v){
    int n=v.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    //s= start index
    // e= end index
    while(s<=e){
        if(s==e){
            return s;
            // yaha pr hum s , e or mid me se
            // kisiko bhi return kr skte h same ans aayega

        }
        // yaha  me glti krunga kyuki
        // mid ki limit lagani h
        else if(mid+1<n && v[mid] > v[mid+1]){
            return  mid;
            
        }
        // yaha pr index negative me na jaye is liye
        // mid-1>=0 ki condition lagayi h
        else if(mid-1>=0 && v[mid] < v[mid-1]){
            return mid-1;
           
        }
        else if (v[s]>v[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int>v{12,14,16,2,4,6,8,10};
    int pivot=pivotIndex(v);
    cout<< "pivot index is"<<"->"<<pivot<<endl;
    return 0;
}