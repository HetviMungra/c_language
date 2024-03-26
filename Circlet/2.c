#include<stdio.h>
int main()
{
  int i,j,count;
  count=11;
  for(i=1;i<6;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%3d",count++);
    }
    printf("\n");
  }

}
