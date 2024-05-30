#include<iostream>
using namespace std;
int main()
{
    
    // outerloop -> row
    for(int row=0; row<10; row++)
    {
        // innerloop -> collum
        for( int col=0; col<7; col++)
        {
            // if zeroth or last row print star
            if (row==0 || row==9)
            {
              cout << " * ";
            }
            // else print 1star , 3space and 1 star
            else{
                //print star in first and last collum
                if(col==0 || col==6)
                {
                    cout << " * ";
                    

                }
                else{
                    cout << "   ";
                }

            }
        }
        cout<<endl;
    }
}