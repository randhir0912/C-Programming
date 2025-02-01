#include<stdio.h>
void add();
void sub();
void mul();
void div();
int main(){
   // add();
    sub();
    mul();
    add();
    div();
return 0;
}
void add(){
int a,b,sum;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum: %d",sum);
}
void sub(){
int a,b,sub;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("sub: %d",sub);
}
void mul(){
    int a,b,mul;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("mul: %d",mul);

}
void div(){
int a,b,div;
    printf("\nEnter two numbers: ");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("div: %d",div);
}

