#include <stdio.h>
#include <string.h>
#include <stdio.h>

int addition();
int subtraction();
int multiplication();
int division();

int main(void)
{
    printf("MENU \n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACT\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVIDE\n");

    int ch;

    printf("Enter the choice with reference to MENU\n ");
    scanf("%d",&ch);

    switch("%d",ch)
    { 
        case 1: //ADDITION
           
           printf("ADDITION\n");
           addition();
           break;

        case 2: //SUBTRACTION
          printf("SUBTRACTION\n");
          subtraction();
          break;

        case 3: // MULTIPLICATION
          printf("MULTIPLICATION\n");  
          multiplication();
          break;

        case 4: //DIVISION
          printf("DIVISION\n");
          division();
          break;

    }
    return 0 ;
}

//function for addition of no.s


int addition(void)
{ 
    int n;
    float res= 0 ;

      printf("Enter the no. of inputs    \n  ");
      scanf("%d",&n);
      float add[n];
      
      for(int i = 0; i < n; i++)
      {
      printf("Enter the numbers   ");
      scanf("%f",&add[i]);

      res= res + add[i];
      }

    printf("The addition of the no. is   ");
    printf("%0.4lf",(res));  
    
return 0;
}


//Function to subtract the no.s

int subtraction(void)
{
    int n;
    double res = 0;

    printf("enter the no. of inputs   ");

    scanf("%d",&n);

    double sub[n];
    double fir, sec;
     
    printf("Enter the first numbers \n  ");
    scanf("%lf",&fir);

    if (n==1)
         {
            printf("The subtraction of the numbers   %0.4lf",fir);
         }
         
    else if(n==2)
    {
      printf("Enter the second numbers \n  ");
      scanf("%lf",&sec);
            
      res= fir-sec; // this only works when there are two numbers only
      
      printf("The subtraction of two no.s is    %0.4lf ",res);
    
    }
         
    else if(n>2)
    {
      printf("Enter the second numbers \n  ");
      scanf("%lf",&sec);
            
      res= fir-sec;
          
      for (int i= 0; i<n-2; i++)
      {
         printf("Enter the numbers %d \n ",i+3);
         scanf("   %lf",&sub[i]);
        
            res=res-sub[i];
       }
 
    printf("The subtraction of the no. is    "); 
    printf("%0.4lf",(res));
    }

 return 0;

}

//Function for multiplication by VIPUL KUMAR SINGH

int multiplication(void)
{
    
    double res = 1; 
    int n;   
    printf ("enter the no. of inputs    ");
    scanf("%d",&n);

    double mul[n];

   
    for(int i =0; i < n; i++)
    {
        printf("Enter the no.s   ");
        scanf("%lf",&mul[i]);
        res= res * mul[i];
    }
    printf("The  multiplication of the no. is    ");
    printf("%0.6lf",(res));
 return 0;
}


//Function to divide no.s

int division(void)
{
        int n;
 
        double res;

        printf("Enter the no. of inputs   ");

        scanf("%d",&n);

        float div[n-2], fir, sec;
        
         printf("Enter the first numbers  \n ");
         scanf("%f",&fir);
         
         
         if (n==1)
         {
            printf("The division of the numbers   %f",fir);
         }
         
         else if(n==2)
         {
            printf("Enter the second numbers \n  ");
            scanf("%f",&sec);
            
            res= fir/sec; // this function only works for two numbers only
            printf("The division of two no.s is    % 0.4lf",res);
         }
         
        else if(n>2)
        {
            printf("Enter the second numbers  \n ");
            scanf("%f",&sec);
            
          res= fir/sec;
          
          for (int i= 0; i<n-2; i++)
         {
            printf("Enter the number %d ",i+2);
            scanf("  %f",&div[i]);
        
            res=res/div[i];

         }
    printf("The division of the no. is    ");
    printf("%0.4lf",res);
         }
         
         else {
             printf("INVALID INPUT");
         }
return 0;
}