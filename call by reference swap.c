#include <stdio.h>

int swap(int *x,int *y); // function prototype 

int main() 
{
    int a, b;
    printf("ENTER THE TWO NUMBERS \n");
    scanf(" %d\n %d\n",&a , &b); 

    printf("\nBEFORE THE SWAPPING \na=%d \nb=%d \n",a , b);

    swap(&a , &b); 

    printf("\nAFTER THE SWAPPING \na=%d \nb=%d \n ", a, b);

    return 0;
 
}

int swap(int *x , int *y)   // call by refernce
{
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;


    return 0;
}

/*made by vipul kumar singh 
roll no. 06216412820
B tech First year */

