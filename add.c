#include<stdio.h>
int sum(int ,int);
int main(){
    int a,b,c;
    printf("Enter the two number: ");
    scanf("%d%d",&a,&b);
    c=sum(a,b); // actual parameter
    printf("Sum of two number is : %d ",c);
    return 0;
    }
    int sum (int x,int y){    //formal parameter
        int add;
        add =x+y;

        return add;
    }