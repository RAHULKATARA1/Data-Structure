#include<iostream>
using namespace std;
// recursion method
// int solveUsingRec(int n, int k){
//     // base case
//     if(n == 1){
//         return k;
//     }
//     if(n==2){
//         return(k+ k*(k-1));
//     }
//     int ans = (solveUsingRec(n-1 , k) + solveUsingRec(n-2 , k))*(k-1);
//     return ans;
// }

// memoisation method
int solveUsingMemo(int n, int k, vector<int>& dp) {
    // base case
    if(n == 1) {
        return k;
    }
    if(n == 2) {
        return (k + k * (k - 1));
    }

    // already exist
    if(dp[n] != -1) {
        return dp[n];
    }

    // store the result in dp[n] instead of redeclaring
    dp[n] = (solveUsingMemo(n - 1, k, dp) + solveUsingMemo(n - 2, k, dp)) * (k - 1);
    return dp[n];
}

// tabulation method 
int solveUsingTab(int n, int k){
    vector<int> dp(n+1 , -1);
    //step1
    dp[1] = k;
    dp[2] = k+k*(k-1);
    for(int i = 3; i<=n; i++){
        dp[n] = (dp[i-1] + dp[i-2]) * (k - 1);
    }
    return dp[n];

}
// space otimasation
int solveUsingSpace(int n, int k){
   // vector<int> dp(n+1 , -1);
    //step1
    int prev2 = k;
    int prev1 = k+k*(k-1);
    int curr;
     if(n == 1) {
        return prev2;
    }
    if(n == 2) {
        return prev1;
    }
    for(int i = 3; i<=n; i++){
        curr = (prev1 + prev2)*(k-1);
        // shift
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;

}

int main(){
    int n = 3;
    int k = 3;
    // int ans = solveUsingRec(n,k);
    // cout<<"Ans  :-  "<<ans<<endl;
    // vector<int> dp(n+1 , -1 );
    int ans = solveUsingSpace(n,k);
    cout<<"Ans  :-  "<<ans<<endl;
    return 0;
}