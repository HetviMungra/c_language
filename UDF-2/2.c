#include<stdio.h>

 mystrlen(char str[30])  
  {
    int i, len=0;

  for(i=0;str[i]!=NULL;i++)
  {
   len++;
  }

  return(len);
}
 main()
{
 char str[30];
 int i, len;

 printf("Enter string:\n");
 gets(str);

 len = mystrlen(str); 
 printf("Length  is: %d", len);

}



