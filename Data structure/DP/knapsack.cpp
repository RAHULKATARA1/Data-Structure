#include<iostream>
#include<vector>
using namespace std;
// using recursion
// int solveUsingRec(int capacity , int wt[], int profit[], int index, int n){
//     // base case
//     if(index == n-1){
//         if(wt[index]<= capacity){
//             return profit[index];
//         }
//         else{
//             return 0;
//         }
//     }
//     //inc // exc 
//     int include = 0;
//     if(wt[index]<= capacity){
//         include = profit[index] + solveUsingRec(capacity - wt[index],wt,profit,index+1,n);
//     }
//     int exclude = 0 +solveUsingRec(capacity,wt,profit,index+1,n);
//     int ans = max(include,exclude);
//     return ans;
// }


// // using memoisation
// int solveUsingMemo(int capacity , int wt[], int profit[], int index, int n,  vector<vector<int> >& dp){
//     //base case 
//     if(index >= n){
//         return 0;
//     }
//     //already exist
//     if(dp[capacity][index] != -1){
//         return dp[capacity][index];
//     }

//      //inc // exc 
//     int include = 0;
//     if(wt[index] <= capacity){
//         include = profit[index] + solveUsingMemo(capacity - wt[index],wt,profit,index+1,n,dp);
//     }
//     int exclude = 0 +solveUsingMemo(capacity,wt,profit,index+1,n,dp);
//      dp[capacity][index] = max(include,exclude);
//     return dp[capacity][index];
// }

// tabulation method 

int solveUsingTab(int capacity , int wt[], int profit[],   int n){

     vector<vector<int> > dp(capacity+1 , vector<int>(n+1 , -1));
     for(int row = 0; row<=capacity; row++){
        dp[row][n] = 0;
     }
     for(int i =0; i<=capacity; i++){
        for(int j =n-1; j>=0; j--){
          //inc // exc 
        int include = 0;
        if(wt[j] <= i){
        include = profit[j] + dp[i-wt[j]][j+1];
        }
        int exclude = 0 + dp[i][j+1];
         dp[i][j] = max(include,exclude); 
        }
     }
      return dp[capacity][0];


}
int main(){
    int capacity = 50;
    int wt[]={10,20,30};
    int profit[] = {60,100,120};
    // int index = 0;
    int n = 3;
    vector<vector<int> > dp(capacity+1 , vector<int>(n+1 , -1));
    int ans = solveUsingTab(capacity,wt,profit,n);
    cout<<"max profit :- "<<ans<<endl;

    return 0;
}