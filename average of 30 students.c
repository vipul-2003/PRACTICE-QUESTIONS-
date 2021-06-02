#include <stdio.h>

int main() 
{
    int a[30];
    int sum = 0;

    printf ("\nENTER THE MARKS OF 30 STUDENT IN AN ARRAY \n");

    for (int i =0 ; i <=29 ; i++)
    {
        
        printf ("enter the marks of i=%d  ",i+1);
        scanf("   %d", &a[i]);
        sum = sum + a[i];
        
    }
    
    float f = sum / 30 ;

    printf ("THE AVERAGE MARKS OF STUDENTS IS  %f ",f);
    return 0;
}

/*made by vipul kumar singh 
roll no. 06216412820
B tech First year */

