#include <stdio.h>

int main()
{
    int arr[100], n, pos, element, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    if(pos > n + 1 || pos < 1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        // Shift elements to the right
        for(i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        // Insert element
        arr[pos - 1] = element;
        n++;

        printf("Array after insertion: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}