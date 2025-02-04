#include<stdio.h>
int check();
int main(){
    check();
    return 0;
}
int check(){
    int a,b,c;
    printf("Enter the two number: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("The largest number is the %d",a);
    }
    else
    {
        printf("The largest number is the : %d",b);
    }
   // return 0;

}