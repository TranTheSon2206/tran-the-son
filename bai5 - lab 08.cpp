#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ch[80];
	printf("Nhap chuoi ky tu: ");
	gets(ch);
	char *ptr;
	ptr=&ch[0];
	int n=strlen(ch);
	int k=0;
	while (*ptr!='\0')
	{
		k++;
		ptr++;
	}
	printf("Do dai chuoi ky tu: %d",k);
	return 0;
}
