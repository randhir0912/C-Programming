#include<stdio.h>
int fact(int);
int main(){
    int n,f=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d",n,f);
return 0;
 }
 int fact (int i)
 {
    if(i<=1)
    {
        return 1;

    }
    else 
    {
        return i*fact(i-1);
    }
 }