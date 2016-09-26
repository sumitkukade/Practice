#include<stdio.h>
int main(){
	int a[]={10,9,8,7,6,5,4,3,2,1,0};
	int min=0,m,n,i;
	int minIndexNo,temp;

	for(n=0;n<10;n++){
		min = n;
		for(m=n+1;m<11;m++){
			if(a[m]<a[n]){
			min=m;
			}
		}
		if(min!=n){
			temp=a[n];
			a[n]=a[min];
			a[min]=temp;
		}

	}

for(i=0;i<11;i++){
	printf("%d ",a[i]);
}
}
