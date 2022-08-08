#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	//nhap gia tri cua a,b
	printf("Nhap gia tri cua a va b: ");
	scanf("%d%d",&a,&b);
	//gan dia chi o nho cua a,b cho con tro pt1,ptr2
	ptr1=&a;
	ptr2=&b;
	//Hoan doi gia tri cua a,b
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	//in ra gia tri sau khi chuyen doi a voi b va dia chi cua chung
	printf("Gia tri cua a,b sau khi hoan doi la: %d %d",a,b);
	printf("\nDia chi cua a va b lan luot la: %d %d",ptr1,ptr2);
	return 0;
}
