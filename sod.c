#include<stdio.h>
int sumdigit(int);
int main(){
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum= sumdigit(n);
    printf("Sum of the digits : %d",sum);
}
int sumdigit(int y){
    int rem,sum=0;
    while(y!=0){
        rem=y%10;
        sum=sum+rem;
        y=y/10;
    }
    return sum;


}