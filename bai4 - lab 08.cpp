#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a[5],b[5],c[5];
	int i;
	//Nhap gia tri cac phan tu cho mang a va b
	printf("nhap gia tri cho mang a: ");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
	}
	printf("nhap gia tri cho mang b: ");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&b[i]);
	}
	//tinh gia tri cho mang c
	int *p;
	p=&c[0];
	for(i=0;i<5;i++)
	{
		*(p+i)=a[i]+b[i];
	}
	//In ra cac mang
	printf("\nCac phan tu cua mang a la: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
		printf("\nCac phan tu cua mang b la: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
		printf("\nCac phan tu cua mang c la: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}
