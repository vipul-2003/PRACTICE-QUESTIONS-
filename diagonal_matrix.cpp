#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main ()
{
    int n ;
    cin>>n;

    int array[n][n];

    for (int i = 0 ; i <n; i++)
    {
        for (int j = 0; j <n ; j++)
        {
            cin>>array[i][j];
        }
    }

    int diagonal_count_right = 0 ;
    int diagonal_count_left = 0 ; 

    for (int i = 0 ; i< n ; i++)
    {
        for (int j = 0 ; j <n; j++)
        {
            if ( i == j)
            {
                diagonal_count_right  += array [i][j];
            }

            if (( i + j) == (n - 1))
            {
                diagonal_count_left += array [i][j];
            }

        }

    
    }
    
    cout <<"The Absolute Difference Of The Diagonal Is "<< abs(diagonal_count_left - diagonal_count_right );

return 0;

}