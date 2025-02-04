#include<stdio.h>
int check (int,int);
int main(){
    int a,b,c;
    printf("Enter the numbers: ");
    scanf("%d%d",&a,&b);
    c=check(a,b);
    printf("The largest number is : %d",c);
    return 0;
}
int check(int x,int y){
    if(x>y)
    {
        return x;
    }
    else {
        return y;
    }
}