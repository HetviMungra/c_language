#include<stdio.h>
main(){
    int mark;
    printf("Enter  your Marks : ");
    scanf("%d",&mark);
    if(mark>=90 && mark<=100)
    {
        printf("\n`Your grade is A`");
    }
    else if (mark >=80 && mark <=89 )
    {
       printf("\n`Your grade is B`");
    }
    else if (mark >=70 && mark <=79 )
    {
        printf("\n`Your grade is C`");
    }
    else if (mark >=60 && mark <69 )
    {
        printf("\n`Your grade is D`");
    }
    else
    {
              printf("\n`Your grade is F`");
  
    }
}

