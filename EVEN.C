// WAP TO PRINT EVEN NUMBERS 

#include <stdio.h>

int main()
{
    printf ("\n EVEN NO. FROM 1 TO 100");
    
    int i =1 ;
    while( i<=100)
    {
        if(i%2==0)
        {
        printf (" \n %d  ", i);
        }

        i++;

    }

    return 0;

}