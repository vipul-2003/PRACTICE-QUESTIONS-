#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main ()
{
    int n ;
    cin>>n;

    int matrix[n][n];

    for (int i = 0 ;i <n ; i++)
    {
        for (int j = 0 ; j< n ; j++)
        {
            cin>>matrix[i][j];
        }
    }

    int k ;
    cin >>k;

    int row = k / n ;
    int column = (k % n) - 1 ;

    cout << matrix [row][column];


    return 0 ;


}