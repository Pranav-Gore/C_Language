#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number\n");
    scanf("%d",&a);
    
    printf("Enter second number\n");
    scanf("%d",&b);

    if(a>b){
        printf("first number is maximum\n");
    }
    else if(a<b){
        printf("Second number is maximum\n");
    }
    else{
        printf("Both numbers are equals\n");
    }
    return 0;
}