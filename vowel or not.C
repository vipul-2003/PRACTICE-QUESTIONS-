#include <stdio.h>

int main(void)
{
    char ch;

    printf(" ENTER THE CHARACTER\n");
    scanf("%c",&ch);

     //condition to check character is alphabet or not
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
     switch("%c",ch) 
     {
        case 'a' :
        case 'e' :       //condition used to check whether the character is vowel or not 
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
        printf("THE INPUTTED CHARACTER IS VOWEL %c",ch);

        break;

        default :
        printf("THE INPUTTED CHARACTER IS CONSONANT %c",ch);
     }
    }

    else 
    {
        printf("THE INPUTTED CHARACTER IS NOT AN ALPHABET %c \n",ch);
    }

 return 0;

}

/* MADE BY VIPUL KUMAR SINGH 
ROLL NO. 06216412820
B TECH ECE 
FIRST SEMESTER
*/