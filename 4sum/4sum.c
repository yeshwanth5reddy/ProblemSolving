#include<stdio.h>
int main(void){
         int i,j,k,a[1000],n,target,l;
        printf("enter the number of elements :");
         scanf("%d",&n);
        printf("enter the target element :");
        scanf("%d",&target);
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(i=0;i<=n-3;i++){
                for(j=i+1;j<=n-2;j++){
                        for(k=j+1;k<=n-1;k++){
				for(l=k+1;l<=n;l++){

				if(a[i]+a[j]+a[k]+a[l]==target){
                                        printf("%d %d %d %d\n",i,j,k,l);
                                }
                        }
                }
        }
}
}
