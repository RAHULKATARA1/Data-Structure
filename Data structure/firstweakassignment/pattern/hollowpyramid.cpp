#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    for (int row=0; row<n; row++)
    {
        //space
        for(int col=0; col<n-row-1; col++)
        {
            cout<<" ";
        }
        //star
        for(int col=0; col<row+1; col++)
        {
            // print star for first and last collum
            if(col==0 || col==row+1-1)
            {
                 cout<<"* ";
            }
            // print space for every between first and last 
            // colllum print space 
            else{
                cout<<"  ";

            }
        }
        cout<< endl;

    }
    return 0;
}