/* print the combination of  two numbers from 1 upto n numbers. 
[1, 2 ]
[1, 3 ]
[1, 4 ]
[1, 5 ]
[2, 3 ]
[2, 4 ]
[2, 5 ]
[3, 4 ]
[3, 5 ]
[4, 5 ]
*/


#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    int n  ;
    cin>> n ;

    for ( int i = 1 ; i  <= n ; i++)
    {
        for ( int j= i+1; j <= n; j++)
        {
            cout <<"["<<i <<", "<<j<<" ]"<<endl;
        }
    }

return 0; 

}