#include<stdio.h>
void swap(int *a, int *b);
void main(){
    int m=88,n=77;
    printf("\nvalues before swapping %d and % d",m,n);
    swap (&m,&n);
}
void swap (int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nvalues after swapping %d and % d",*a,*b);
}