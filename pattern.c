#include<stdio.h>
int first_pattern(int n);
int first_pattern(int n)
{
	int i,j;
	int c = 65;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",c+i);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
int second_pattern(int n);
int second_pattern(int n)
{
	int i,j;
	int c = 65;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",c+j);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
int third_pattern(int n);
int third_pattern(int n)
{
	int count = 0,i,j;
	char c = 65;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",c);
			c++;
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;


}

int forth_pattern(int n);
int forth_pattern(int n)
{
	int i,j;
	int c = 65;
	int count = 0;

	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c ",c+count);
		}
		count += 2;
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
int fifth_pattern(int n);
int fifth_pattern(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
int sixth_pattern(int n);
int sixth_pattern(int n)
{
	int i,j;
	int count = 1;

	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",count);
		}
		count += 2;
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
int seventh_pattern(int n);
int seventh_pattern(int n)
{
	int i,j;
	int count = n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",count-j);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
int eightth_pattern(int n);
int eightth_pattern(int n)
{
	int i,j;

	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}


int nineth_pattern(int n);
int nineth_pattern(int n)
{
	int i,j;
	int count = 1;

	for(i=0;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			printf("%d ",n-j);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}
int tenth_pattern(int n);
int tenth_pattern(int n)
{
	int i,j;
	int c = 64;
	for(i=0;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("%c ",c+j);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}



int main()
{
	int n;
	printf("");
	scanf("%d",&n);
	printf("\n");
	first_pattern(n);
	second_pattern(n);
	third_pattern(n);
	forth_pattern(n);
	fifth_pattern(n);
	sixth_pattern(n);
	seventh_pattern(n);
	eightth_pattern(n);
	nineth_pattern(n);
	tenth_pattern(n);
	return 0;
}
