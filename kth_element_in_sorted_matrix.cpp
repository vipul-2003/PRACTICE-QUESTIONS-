#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main ()
{
    int n ; // To get the order for a matrix 
    cin>>n;

    int matrix[n][n];

    for (int i = 0 ;i <n ; i++)
    {
        for (int j = 0 ; j< n ; j++)
        {
            cin>>matrix[i][j];  // To get the elements of matrix from the user 
        }
    }

    int k ;
    cin >>k; // To get the number (integer type ) to find the element at that place 

    int row = k / n ;
    int column = (k % n) - 1 ;

    cout << matrix [row][column];


    return 0 ;


}
