#include<stdio.h>
main()
{
    int arr_3[5][5],sum_boundary=0;
    
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
        {
            printf("Enter Values : ");
            scanf("%d",&arr_3[i][j]);
        }
        printf("\n");
    }
    
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=4; j++)
        {
            if(i==0 || j==0 || j==4 || i==4)
            {
                printf("%d ",arr_3[i][j]);
                sum_boundary += arr_3[i][j];
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("Sum Of Boundary Elements Of Array is : %d",sum_boundary);
   

}