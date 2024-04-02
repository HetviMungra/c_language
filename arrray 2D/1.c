#include<stdio.h>
 main()
{
    int arr[12][12];
    int i,j,r,c;
    float average,sum=0;
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of the matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)    
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("The elements in the matrix are\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    average=sum/(r*c);
    printf("\nAverage of all the elements of the matrix = %.2f",average);
}

