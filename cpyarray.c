#include<stdio.h>
int main()
{
	int n;
	printf("how many elements u want to be insert\n");
	scanf("%d",&n);
	int arr[n],brr[n],*a,*b,i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	a=&arr;
	for(i=0;i<n;i++)
		brr[i]=*(a+i);
	for(i=0;i<n;i++)
		printf("%d ",brr[i]);
}


