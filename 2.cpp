#include <stdio.h>
int main()
{
   int a[3][4];
   int i,j,max,t,row,cow;

   for(i=1;i<=3;i++)
   {
	   
	   for(j=1;j<=4;j++)
	   {
		   scanf("%d",&a[i][j]);
		   
	   }
   }
    
    printf("ͼ��Ԥ��ͼ��\n");
	printf("--------------------------\n");
      for(i=1;i<=3;i++)
	  {
		  if(i>1)
		  {
			   printf("\n");
		  }
		  for(j=1;j<=4;j++)
		  {
		   printf("%d\t",a[i][j]);
	   
		  }
   }
	  printf("\n");
      printf("--------------------------\n");

   max=a[1][1];
   for(i=1;i<=3;i++)
   {
	   for(j=1;j<=4;j++)
	   {
		   if(a[i][j]>max)
		   {
			   max=a[i][j];
			   row=i; cow=j;
		   }
		   

	   }
   }
   printf("���ֵ��%d �кţ�%d �кţ�%d",max,row,cow);
   printf("\n");
	





	return 0;
}