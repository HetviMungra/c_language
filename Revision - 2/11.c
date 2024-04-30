#include<stdio.h>
void main()
{
	int size1, size2,i,j;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int a[size1];
    int b[size2];

    int intersection[size1];
    
    for ( i = 0; i < size1; i++) {
        printf("Enter elements of first array: ");
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < size2; i++) {
        printf("Enter elements of second array: ");
        scanf("%d", &b[i]);
    }
    int k = 0;
    for ( i = 0; i < size1; i++) {
        for ( j = 0; j < size2; j++) {
            if (a[i] == b[j]) {
                int flag = 0,l;
                for ( l = 0; l < k; l++) {
                    if (intersection[l] == a[i]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    intersection[k++] = a[i];
                }
              
            }
        }
    }
    printf("Intersection of two arrays is: ");
    for ( i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
    
    return 0;
}

