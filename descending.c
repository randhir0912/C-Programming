#include<stdio.h>
int main(){
    int row,col,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=n;col>=1;col--){
            printf(" %d ",col);
        }
        printf("\n");
    }
    return 0;
}