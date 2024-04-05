#include <stdio.h> 
#include <string.h>  
 
main()
{
	char n[100];           
	printf("Enter your name");
	gets(n);
//    puts(strupr(n));
//    puts(strlwr(n));
//    printf("%d",strlen(n));
     puts(strrev(n));
    return 0;
}
