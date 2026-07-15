#include<iostream>
using namespace std;
int main()
{
	int a;
	int b,op;
	printf("Enter the number 1:");
	scanf("%d",&a);
	printf("Enter the number 2:");
	scanf("%d",&b);
	printf("Menu: \n");
	printf("1.Addition");
	printf("2.Subraction");
	printf("3.Subraction");
	printf("4.Division");
	scanf("%d",&op);
	if(op==1)
	{
		printf(a+b);
	}
	else if(op==2)
	{
		printf(a-b);
	}
	else if(op==3)
	{
		printf(a*b);
	}
	else
	{
		printf(a/b);
	}
	return 0;
}

