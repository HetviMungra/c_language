#include <stdio.h>  /

int main() {  

    char str1[100], str2[100];  
    int i = 0, j = 0;  

   
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    
    while (str1[i] != '\0') {
        i++;
    }

    
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  
    
    printf("Concatenated String: %s\n", str1);

    

}
