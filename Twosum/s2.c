
#include<stdio.h>
int main(void)
{
        int n,test,i,j;
        printf("enter the number of ele :");
        scanf("%d",&n);
        scanf("%d",&test);
        int a[n];
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }
        for(i=0;i<=n-1;i++){
                for(j=i+1;j<=n;j++){
                        if(a[i] + a[j] == test)
                         printf("%d %d",i,j);}}}
