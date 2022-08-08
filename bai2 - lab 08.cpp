#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*ptr[5];
	//Nhap gia tri cho mang thong qua con tro
	printf("Nhap cac gia tri cua mang: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));
	}
	//In gia tri cua phan tu trong mang thong qua con tro
	printf("Cac phan tu cua mang la: \n");
	for(i=0;i<5;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}
