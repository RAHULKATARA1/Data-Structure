#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct job
{
    int id;
    int deadline;
    int profit;

    //comprator banao
    bool static compare(job a , job b){
        return (a.profit > b.profit);
    }
};

void jobscheduling(vector<job> &arr, int n){
    sort(arr.begin(),arr.end(),job::compare);
    vector<int>result(n,-1);
    vector<bool>slot(n,false);
    int totalprofit = 0;

    // travesing through all jobs given

    for(int i = 0; i<n; i++){
        int k = min(n,arr[i].deadline)-1;
        for(int j = k; j>=0; j--){
            // check krenge free time slots
            if(slot[j]==false){
                result[j] = arr[i].id;
                slot[j] = true;
                totalprofit = totalprofit + arr[i].profit;
                break;
            }
        }
    }

    // output
    cout<<"Job Sequence:    ";
    for(int i =0; i<n; i++){
        if(result[i] != -1){
            cout<<result[i]<<"  ";
        }
    }
    cout<<endl;
    cout<<"Total Profit:    "<<totalprofit<<endl;
}


int main(){
    int n;
    cout<<"Enter the number of jobs:    ";
    cin>>n;
    vector<job>arr(n);

     for(int i = 0; i < n; i++) {
        cout << "\nEnter job number for job " << i+1 << ": ";
        cin >> arr[i].id;
        cout << "Enter deadline for job " << i+1 << ": ";
        cin >> arr[i].deadline;
        cout << "Enter profit for job " << i+1 << ": ";
        cin >> arr[i].profit;
    }

    jobscheduling(arr,n);
    return 0;
}