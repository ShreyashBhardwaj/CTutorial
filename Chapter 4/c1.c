#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("Choose the operation you want to perform:\n");
    printf("1. Concatenate the strings\n");
    printf("2. Compare the strings\n");
    printf("3. Copy the strings\n");
    printf("4. Length of the strings\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        strcat(str1, str2);
        printf("The concatenated string is: %s\n", str1);
        break;
    case 2:
        if (strcmp(str1, str2) == 0)
            printf("The strings are equal\n");
        else
            printf("The strings are not equal\n");
        break;
    case 3:
        strcpy(str1, str2);
        printf("The copied string is: %s\n", str1);
        break;
    case 4:
        printf("The length of the first string is: %d\n", strlen(str1));
        printf("The length of the second string is: %d\n", strlen(str2));
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}