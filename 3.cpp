#include <stdio.h>
int main()
{
	int a[3][3];
	int i,j,he,row,cow;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n\n");
	he=0;
	for(i=1;i<=3;i++)
	{
		if(i>1)
		{
			printf("\n");

		}
		for(j=1;j<=3;j++)
		{
			printf("%d\t",a[i][j]);
		    if(i==j)
			{
				he=he+a[i][j];
			}
		}
	}
	printf("\n");
	printf("对角线元素之和:%d",he);
	printf("\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}