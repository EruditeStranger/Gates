#include <stdio.h>

int main()
{
	int A[20];
	int i,n;
	int pos,newnum;
	char djent;
	printf("Enter the number of elements in the array \n",n);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("The array is:\n");
	for(i=0;i<n;i++)
	{
	printf("[");		
	printf("%d",A[i]);
	printf("]");
	}
	printf("To insert a number, say i; to delete an element, say d\n");
	scanf("%s",&djent);
	if (djent == 'i')
	{
		n++;
		printf("Enter the position\n");
		scanf("%d",&pos);
		printf("Enter the number\n");
		scanf("%d",&newnum);


		for(i=n-1;i>=pos-1;i--)
		A[i+1]=A[i];

		A[pos]=newnum;
	


		printf("The new array is:\n");
		for(i=0;i<n;i++)
		{
			printf("[");
			printf("%d",A[i]);
			printf("]");
		}
		return 0;
	}
	else
		if (djent == 'd')
		{
		n--;
		printf("Enter the position to delete\n");
		scanf("%d",&pos);

		for(i=pos-1;i<=n-1;i++)
		{
			A[i]=A[i+1];
		}
		

		printf("The new array is:\n");
		for(i=0;i<n;i++)
		{
			printf("[");
			printf("%d",A[i]);
			printf("]");
		}

		return 0;
		}
	return 0;
}