#include<stdio.h>
#include<string.h>
int main()
{
	int n,cnt=0;
	printf("how many characters want to insert for string\n");
	scanf("%d",&n);
	char str1[n],str2[n],i,*p,*q;
	scanf("%s",str1);
	p=str1;
	q=str2;
	for(int i=0;i<strlen(str1);i++)
		*(q+i)=*(p+i);
           printf("%s ",str2);
}
