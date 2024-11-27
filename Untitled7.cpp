#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=1,n=1;i<6;i++)
	{
		for(j=1;j<5-i;j++)
		printf("%d ",n++);
		printf("\n");
	}
	return 0;
}
