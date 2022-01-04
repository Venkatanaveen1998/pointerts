#include<stdio.h>
int main()
{
	int n;
	printf("how many elements want to be insert\n");
	scanf("%d",&n);
	int arr[n],brr[n],i,j,temp,*a,*b;
	printf("enter the elements\n");
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	a=&arr; b=&brr;
	for(i=n-1,j=0;i>=0;i--,j++)
		*(b+j)=*(a+i);
	for(i=0;i<n;i++)  printf("%d ",brr[i]);
		
		
}
