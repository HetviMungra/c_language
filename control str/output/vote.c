#include <stdio.h>
main(){
    int a;
    printf("Enter your age:");
    scanf(" %d",&a);
     if(a<18)
        {printf("\nSorry! You are not eligible for voting.");
        }
      else{
         printf("\nCongratulations! You are eligible for voting.");
      }
}