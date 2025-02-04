#include<stdio.h>
void swap(int a, int b);
void main(){
    int m=22,n=44;
    printf("Values before swap %d and %d",m,n);
    swap(m,n);
}
void swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nValues after swap %d and %d",a,b); 
}