#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Ham kiem tra doi xung cua chuoi
char ktdoixung(char str[80])
{
    int i;
    for (i = 0; i < strlen(str) / 2; i++)
    {
        if (str[i] != str[strlen(str) - 1 - i])
        {
            return 0;//neu ky tu thu i khac voi ky tu thu n-i-1 thi ham tra ve gia tri 0
        }
    }
    return 1;//neu ky tu thu i khong khac voi ky tu thu n-i-1 thi ham tra ve gia tri 1
}
int main()
{
	char str[80];
	int i;
	//nhap chuoi ky tu
	printf("Nhap chuoi ky tu: \n");
	gets(str);
	printf("\nChuoi vua nhap la: %s ",&str);
	// kiem tra tinh doi xung cua chuoi
	if(ktdoixung(str)==0)
	{
		printf("\nChuoi khong doi xung");
	}
	if(ktdoixung(str)==1)
	{
		printf("\nChuoi doi xung");
	}
}
