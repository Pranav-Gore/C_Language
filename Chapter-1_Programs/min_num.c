#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number\n");
    scanf("%d",&a);

    printf("Enetr second number\n");
    scanf("%d",&b);

    if(a<b){
        printf("first number is minimum\n");
    }
    else if(a>b){
        printf("Second number is minimum\n");
    }
    else{
        printf("Both are equals\n");
    }
    return 0;
}
