#include<stdio.h>
void sumdigit();
int main(){
    
   sumdigit();
    return 0;
}
void sumdigit()
{
    int n,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
        printf("Sum of digits %d",sum);
    
    }