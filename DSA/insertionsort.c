#include <stdio.h>
int main()
{
    int a[10], n, i, j, temp;
    printf("enter the no. of elements\n");
    scanf("%d", &n);
    printf("enter the elements in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  
    }
    for (i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && a[j - 1] > a[j])
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
    printf("sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}