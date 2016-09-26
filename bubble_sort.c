/*bubble sort */
#include<stdio.h>
#include<math.h>

int main()
{
	int a[] = {10,9,8,7,6,5,4,3,2,1};
	int temp = 0,i,flag=1;
	


	while(1)
	{
		if(flag==0)
			break;
		flag=0;
		/* I know the no. of elements in array 'a' is 10 so I used 10 insted of N */
		for(i=0;i<10;i++)
		{
			if(a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				/*printf("temp = %d,a[i] = %d,a[i+1] = %d\n",temp,a[i] ,a[i+1]);*/
				flag++;
			}

			/*printf("%d ",a[i]);*/
		
		}
		/*printf("\n");*/
	}
	for(i=0;i<10;i++)
	{printf("%d ",a[i]);}
}


