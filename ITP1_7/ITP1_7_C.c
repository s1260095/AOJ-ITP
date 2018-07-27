#include<stdio.h>
int main()
{
  int m,n,i,j,k=0,box1[100][100],box2[100];

  for(i=0;i<100;i++)
    {
      box2[i]=0;
    }
  scanf("%d %d",&m,&n);
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&box1[i][j]);
	}
    }
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  printf("%d ",box1[i][j]);
	  k=k+box1[i][j];
	}
      printf("%d\n",k);
      k=0;
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
	{
	  box2[i]=box1[j][i]+box2[i];
	}
    }
  for(i=0;i<n;i++)
    {
      printf("%d ",box2[i]);
    }
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  k=k+box1[i][j];
	}
    }
  printf("%d\n",k);
  return 0;
}
