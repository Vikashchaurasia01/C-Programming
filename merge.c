#include <stdio.h>
int main()
{
    int i, j, a[30], b[30], c[60], n, p, k = 0;
    printf("Enter the numer of elements of first array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The first array elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the numer of elements of second array: ");
    scanf("%d", &p);
    for (j = 0; j < p; j++)
    {
        scanf("%d", &b[j]);
    }
    printf("The second array elements are: ");
    for (j = 0; j < p; j++)
    {
        printf("%d\t", b[j]);
    }
    for (i = 0; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (j = 0; j < p; j++)
    {
        c[k] = b[j];
        k++;
    }
    printf("\nArray after merging: ");
    for (k = 0; k < (i + j); k++)
    {
        printf("%d\t", c[k]);
    }
}