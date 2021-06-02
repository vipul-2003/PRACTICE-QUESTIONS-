#include <stdio.h>

int main()
{
    float prc, rate, time, si;

    printf("ENTER PRINCIPAL AMOUNT :");
    scanf("%f", &prc);

    printf("ENTER RATE :");
    scanf("%f", &rate);

    printf("ENTER TIME IN YEARS :");
    scanf("%f", &time);

    si = (prc *rate* time)/100;

    printf("SIMPLE INTEREST : %f",si);
    
    return 0;
    
}