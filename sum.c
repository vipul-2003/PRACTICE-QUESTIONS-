#include <stdio.h>

int main () // main function required to execute the program 

{  
    float n1, n2, sum;

    printf ("Enter the two no.s \n"); // to prompt user to insert two no.s 

    scanf ("%f %f",&n1, &n2);

    sum = n1 + n2 ;

    printf ("The sum of two no.s is %f/n",sum);

    return 0;
}
