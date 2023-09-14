#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct passenger{
    char name[100];
    int age;
};

void passenger_details();
void book_ticket();

int main(){
    printf("\n");
      printf("                             ***********WELCOME TO INDIAN RAILWAYS**************\n");
      char a[100],b[100];
      int x,y,z;
      int p;
    printf("Enter from city/station name or code:");
    gets(a);
    printf("Enter Destination city/station name or code:");
    gets(b);
    printf("choose date DD/MM/YY:");
    scanf("%d%d%d",&x,&y,&z);
    printf("Searching trains.......\n");
    printf("1.train 1\n");
    printf("2.train 2\n");
    printf("3.train 3\n");
    printf("select train:");
    scanf("%d",&p);
    switch(p){
        case 1:
        book_ticket();
        break;
        case 2:
        book_ticket();
        break;
        case 3:
        book_ticket();
        break;
        default:
        printf("Train is not available\n");
    }
}

void book_ticket(){
    int p;
    printf("1.Sleeper\n2.AC\n3.General\n");
    printf("select Type:");
    scanf("%d",&p);
    switch(p){
        case 1:
           passenger_details();
           break;
        case 2:
           passenger_details();
           break;
        case 3:
            passenger_details();
            break;
        default:
        printf("please retry......\n");
    }
}

void passenger_details(){
    struct passenger p;
    int n,i;
    printf("Enter number of passenger:");
    scanf("%d",&n);
    printf("Enter passenger Details:\n");
    for(i=1;i<=n;i++){
    printf("passenger %d:",i);
    scanf("%s",&p.name);
    printf("Enter age:");
    scanf("%d",&p.age);
    }
    printf("Tickets %d booked successfully\n",n);

}