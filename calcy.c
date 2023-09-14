/// c code for simple calculator
#include<stdio.h>
#include<stdlib.h>

void addition();
void substraction();
void multiplication();
void division();

int main(){
    int choice;
    printf("\n");
    printf("**********SIMPLE CALCULATOR**********\n");
    while(1){
        printf("-----------------------\n");
         printf("1.Addition\n");
         printf("2.Substraction\n");
         printf("3.Multiplication\n");
         printf("4.Division\n");
         printf("5.Exit\n");
         printf("-----------------------\n");
         printf("Enter your choice:");
         scanf("%d",&choice);
         switch(choice){
            case 1:
               addition();
               break;
            case 2:
               substraction();
               break;
            case 3:
               multiplication();
               break;
            case 4:
               division();
               break;
            case 5:
               exit(1);
            default:
               printf("Enter correct choice\n");
         }
    }
}

void addition(){
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition=%d\n",c);
}

void substraction(){
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a-b;
    printf("substraction=%d\n",c);
}

void multiplication(){
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("multiplication=%d\n",c);
}

void division(){
     int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("division=%d\n",c);
}