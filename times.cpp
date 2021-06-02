#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#define MAX_INT 1000

using namespace std;

int main ()
{
    int n ; // To take input from user the number of elements
    cin>>n;

    int elements [n];
    int indexarray[MAX_INT];

    for(int i = 0 ; i< MAX_INT ; i++)  // To initialize the array indexarray with zereo (0)
    {
        indexarray[i] = 0;
        
    }
    

    for(int i = 0 ; i< n ; i++)
    {
        cin>>elements[i]; //  To take the number of inputs 
        
        ++indexarray[elements[i]]; // To increase the value by one at inputted base index in array indexarray

    }

    int maximum = (*max_element(elements,elements + n)) + 1; // To get maximum number inserted by the user and added one to it , came to know in a while, why ??

    int divisible = n/3; //  constraints

    
    for ( int j  = 0 ; j <maximum ; j++) //  maximum is plus one (+1) to run the loops as base index in array starts with zero
    {
        if (indexarray[j] > divisible)
        {
            cout <<j;
        }
        
    }

return 0 ;
}
/* MADE BY VIPUL KUMAR SINGH 
GIT HUB -> vipul-2003
*/