#include <stdio.h>
int main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];

	int i,j;
	printf("数列A为：\n");
	for(i=0;i<=1;i++)
	{
		if(i>0)
		{
			printf("\n");
		}
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
			b[j][i]=a[i][j];
		}
	}
		printf("\n\n");
printf("数列B为：\n");
	for(i=0;i<=2;i++)
	{
		if(i>0)
		{
			printf("\n");
		}
		for(j=0;j<=1;j++)
		{
			
			printf("%d\t",b[i][j]);

		}
	}
	printf("\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}