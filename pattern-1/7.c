// A
// BA
// CBA
// DCBA
// EDCBA 65 69
#include <stdio.h>
int main()
{
    for (int i=65;i<=69;i++)
    {
       for(int j=i;j>=65;j--)
          {
             printf("%c",j);
          }
           printf("\n");
    }
   
}
