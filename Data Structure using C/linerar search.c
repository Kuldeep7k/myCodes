#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10], i, item;
    printf("\nEnter no of array: ");
    scanf("%d", &n);
    printf("\nEnter n elements of an array:\n");
    for (i=0; i<=n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter item to search: ");
    scanf("%d", &item);
    for (i=0; i<=n; i++)
        if (a[i]==item)
        {
            printf("\nItem found at location %d", i+1);
            break;
        }
    if (i > n)
        printf("\nItem does not exist.");
    getch();
}
