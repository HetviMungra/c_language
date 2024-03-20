#include <stdio.h>
int main()
{
    char alp = 'a';

    printf("Alphabets from a - z are: \n");
    while(alp<='z')
    {
        printf("%c\n", alp);
        alp+=4;
    }

  
}