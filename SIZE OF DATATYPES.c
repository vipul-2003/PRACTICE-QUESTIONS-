#include <stdio.h>
#include <conio.h>

int main(void)
{
    printf("MENU \n");
    printf("1. SIGNED INTEGER \n");
    printf("2. UNSIGNED INTEGER \n");
    printf("3. SIGNED CHARACTER \n");
    printf("4. UNSIGNED CHARACTER \n");
    printf("5. FLOAT \n");
    printf("6. DOUBLE  \n");
    printf("7. LONG DOUBLE \n");

    int ch;

    double double_1;
    long double double_2;

    float float_1;

    signed char char_1;
    unsigned char char_2  ;

    unsigned int int_1 ;
    signed int int_2 ;

    printf("Enter the choice with reference to MENU     ");
    scanf("%d",&ch);
    
    switch (ch)
    {
         case 1: // SIGNED INTEGER 
            printf("THE SIZE OF THE SIGNED INTEGERS IS %zu \n", sizeof(int_1));
            break;

         case 2: //UNSIGNED INTEGER
            printf("THE SIZE OF THE UNSIGNED INTEGERS IS %zu \n", sizeof(int_2));
            break;
        
        case 3: //SIGNED CHARACTER
         printf("THE SIZE OF THE SIGNED CHARACTER IS %zu \n",sizeof(char_1));
         break;

        case 4: //UNSIGNED CHARACTER 
         printf("THE SIZE OF THE UNSIGNED CHARACTER IS %zu \n",sizeof(char_2));
         break;

        case 5: //FLOAT 
         printf("THE SIZE OF THE FLOAT IS %zu \n ", sizeof(float_1));
         break;

        case 6: //double 
         printf("THE SIZE OF THE DOUBLE IS %zu \n",sizeof(double_1));
         break;

        case 7:
         printf("THE SIZE OF THE LONG DOUBLE IS %zu \n",sizeof(double_2));
         break;

         default :
         printf("ENTERED WRONG CHOICE \n");
         break;

      }

 return 0;

}
