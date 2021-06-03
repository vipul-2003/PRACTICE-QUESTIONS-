/*
Before swapping the elements
1 2 4
5 9 0
3 1 7

After swapping the elements
1 5 3
2 9 1
4 0 7

*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n ; //To get the order of matrix
    cin >> n;

    int matrix [n][n];

    for (int i =0 ; i< n ; i++) // TO take input from user for matrix[n][n]
    {
        for (int j  = 0 ; j< n ;j++)
        {
            cin >>matrix[i][j];
        }
    }

    int temp;

    for (int i =0 ; i<= n/2 ; i++) // Swapping the elements of an array 
    {
        for (int j  = i; j< n ;j++)
        {
            if(i != j)
            {
                temp  = matrix [i][j];
                matrix [i][j] = matrix [j][i];
                matrix [j][i] = temp;
            }
        
        }
        
    }
    temp = 0;


    cout <<"ELEMENTS AFTER SWAPPING"<<endl;
    for (int i =0 ; i< n ; i++)
    {
        for (int j  = 0 ; j< n ;j++)
        {
            
            cout << matrix[i][j]  <<" ";
        }

        cout <<endl;
    }
return  0;

}