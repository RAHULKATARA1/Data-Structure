// Search element in roated and soted array using binary search
// it is two step process
// 1. find pivot 
// 2. split into line 1 and line 2
// 3. search element using binary search in both line

#include<iostream>
#include<vector>
using namespace std;
// pivotIndex function is used for detect the pivot elment
// in rotated sorted array 
//its first step to search element in this array
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
// this function is for binary search in array
// look carefully here -> it depends on target to apply wheter in part A or B.
int binarySearch(vector<int>&v, int s , int e, int target){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(v[mid]== target){
            return mid;
        }
        else if (target > v[mid]){
            s= mid+1;
        }
        else{
            e=mid-1;
        }
         mid = s+(e-s)/2;
    }
    return -1;
}
// this function is for searching is
// wether apply in part A or part B
int searchElement(vector<int>&v , int target){
    int pivot = pivotIndex(v);
    int n = v.size();
    int ans = -1;
    // search in Array A
    if(target >= v[0] && target <= v[pivot]){
        ans = binarySearch(v,0, pivot, target);
    }
    //search in array B
    else{
        ans = binarySearch(v, pivot+1, n-1, target);
    }
    return ans;

}

int main(){
    vector<int>v{12,14,16,2,4,6,8,10};
    int target = 6;
    int targetIndex = searchElement(v, target);
    if(targetIndex == -1){
        cout << "target is not found "<< endl;
    }
    else{
        cout<<"Target index is "<< "-> "<< targetIndex<< endl;
    }
    return 0;
}