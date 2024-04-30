#include <stdio.h>

int main()
{
	 int row, col, sum=0,i,j;
    printf("Enter Row : ");
    scanf("%d",&row);
    printf("Enter Column : ");
    scanf("%d",&col);
    
    int arr_sum[row][col];
    
    for( i=0; i<row; i++)
    {
        for( j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&arr_sum[i][j]);
        }
    }
    for( i=0; i<row; i++)
    {
        for( j=0; j<col; j++)
        {
            sum += arr_sum[i][j];
        }
    }
    printf("Sum Of All Number is : %d",sum);


}
