#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    // FOR OUTER LOOP
    for(int row=0; row<n; row++)
    //for each row to print star
    {
        // for inner loop
        for(int col=0; col<n-row; col++)
        {
            cout<< col+1 << " ";
            
        }
        cout<< endl;
    }
}