/*insertion sort */
#include<stdio.h>
int main()
{
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	int temp = 0,i,flag=1,j;


	for(i=1;i<10;i++)
	{
		/*temp is key to check where it fits in array*/
		temp=a[i];
		/*j is index of sorted numbers and check in j no. where 'temp' fits*/
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
			/*printf("a[j] = %d \n",a[j]);*/
		}
		a[j+1]=temp;
	}
	for(i=0;i<10;i++)
		printf("%d ",a[i]);

}
