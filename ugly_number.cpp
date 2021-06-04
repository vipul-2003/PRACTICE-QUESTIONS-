#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n ;
    cout << "Enter The Nth Element To find the Ugly Number At That Place "<<endl;
    cin>> n ;

    int count = 0 ;
    int i = 1;

   
    while ( true )
    { 
        if ( i == 1 || i % 2 == 0 || i % 3 == 0 || i % 5 == 0)
        {
            count += 1;
             if ( n == count )
             {
                 cout << "The Nth Element is Ugly Number is "<< i <<endl;
                return 0 ;
             }
        }
        i++;
    

    }
    return 1;

}