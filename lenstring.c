#include<stdio.h>
int main()
{
	int n,cnt=0;
	printf("how many characters want to insert for string\n");
	scanf("%d",&n);
	char str[n],i,*p;
	scanf("%s",str);
	p=str;
	for(*p;*p!='\0';p++)
		cnt++;
           printf("%d ",cnt);
}
