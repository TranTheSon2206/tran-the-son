#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n;
	int *ptr;
	printf("\nnhap so sv: ");
	scanf("%d",&n);
	//cap phat bo nho dong theo nhu cau su dung
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("\nKhong du bo nho cho ban!!!");
		exit(0);
	}
	printf("\nNhap vao %d sv: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));//scanf("%d",&ptr[i]);
	}
	printf("\nThong tin: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));//printf("%d",ptr[i]);
	}
	free(ptr);
	return 0;
}
