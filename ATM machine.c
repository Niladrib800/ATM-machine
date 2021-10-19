#include<stdio.h>
int main()
{
    float x,y;
    char ch;
    printf("Enter initial amount\n");
    scanf("%f",&x);
    printf("Enter\n c for credit\n d for debit\n b for balance ");
    scanf(" %c",&ch);
    switch(ch)
    {
      case 'c':
        printf("Enter credit amount");
        scanf("%f",&y);
        x=x+y;
        printf("Net amount=%f",x);
        break;
      case 'd':
        printf("Enter debit amount");
        scanf("%f",&y);
        if(x>=y)
        {
            x=x-y;
            printf("Net amount=%f",x);
        }
        else
            printf("Insufficient balance");
        break;
      case 'b':
        printf("Balance in your account is = %f",x);
        break;
      default:
        printf("Choose the correct option for the operation");
     }



}
