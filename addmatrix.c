#include<stdio.h>
int main()
{
	int rows,cols;
	printf("enter the rows and cols data\n");
	scanf("%d",&rows);
	scanf("%d",&cols);
	int arr[rows][cols],brr[rows][cols],sum[rows][cols],i,j;
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			scanf("%d",*(arr+i)+j);

	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			scanf("%d",*(brr+i)+j);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
			*(*(sum+i)+j)=*(*(arr+i)+j)+*(*(brr+i)+j);
	}

	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
			printf("%d ",*(*(sum+i)+j));
		printf("\n");
	}
}
