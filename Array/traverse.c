#include <stdio.h>

int main()
{
    int a[20], i, n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}