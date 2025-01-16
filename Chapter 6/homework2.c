#include <stdio.h>

int main()
{
    int arr[50], n, i, *p;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    p = arr;
    for (i = n; i > 0; i--)
    {
        printf("%d ", *(p + i - 1));
    }
}