#include<stdio.h>
int sum(int);
void main()
{
    int n,add;
    printf("Enter the number : ");
    scanf("%d",&n);
    add= sum(n);
    printf("Sum of n natural number is : %d",add);
}
int sum(int x)
{
    if(x==0)
    {
        return x;
    }
    else
    {
        return x+sum(x-1);
    }
}