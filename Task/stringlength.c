#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int len;
	printf("Enter string : ");
	scanf("%s",&str);
	len = strlen(str);
	printf("%d",len);
}
