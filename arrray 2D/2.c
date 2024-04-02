#include<stdio.h>
main()
{
    int arr_2[3][3],sum=0;
    
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            printf("Enter Values : ");
            scanf("%d",&arr_2[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            if(i==j)
            {
                sum += arr_2[i][j];
            }
        }
    }
    printf("Sum Of Diagonal Elements Of Array : %d",sum);
    printf("\n\n");

}