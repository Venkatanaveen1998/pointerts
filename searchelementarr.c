#include<stdio.h>
int main()
{
	int n;
	printf("how many elements u want to insert\n");
        scanf("%d",&n);
	int arr[n],i,j,*a,m,cnt=0;
	printf("enter input elements\n");
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	printf("which element u want to search\n");
	scanf("%d",&m);
	a=&arr;
	for(i=0;i<n;i++)
	{
		if(*(a+i)==m)
		{
			cnt++;
			printf("it is found at index %d the value is %d",i,*(a+i));
		}
	}
	if(cnt==0) printf("the element is %d is not founded",m);
}
