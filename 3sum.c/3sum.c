#include<stdio.h>
int main(void){
	 int i,j,k,a[1000],n,target;
	printf("enter the number of elements :");
	 scanf("%d",&n);
	printf("enter the target element :");
	scanf("%d",&target);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-2;i++){
		for(j=i+1;j<=n-1;j++){
			for(k=j+1;k<=n;k++){
				if(a[i]+a[j]+a[k]==target){
					printf("%d %d %d\n",i,j,k);
				}
			}
		}
	}
}
