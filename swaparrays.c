#include<stdio.h>
int main()
{
	int n;
	printf("how many elements want to be insert\n");
	scanf("%d",&n);
	int arr[n],brr[n],i,j,*a,*b,temp;
	printf("enter data for first array\n");
       for(i=0;i<n;i++) scanf("%d",&arr[i]);
       printf("enter data for second array\n");
	for(i=0;i<n;i++) scanf("%d",&brr[i]);
	a=&arr; b=&brr;

	for(i=0;i<n;i++)
	{
		temp=*(a+i);
		*(a+i)=*(b+i);
		*(b+i)=temp;
	}
	for(i=0;i<n;i++) printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<n;i++) printf("%d ",brr[i]);
}
