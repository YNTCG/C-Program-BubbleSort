#include <stdio.h>

int main()
{
    int array[50], a, b, c, swap;

    printf("Type your number of elements\n");
    scanf_s("%d", &a);

    printf("Enter your %d integers\n", a);

    for (b = 0; b < a; b++)
        scanf_s("%d", &array[b]);

    for (b = 0; b < a - 1; b++)
    {
        for (c = 0; c < a - b - 1; c++)
        {
            if (array[c] > array[c + 1]) // To change the order of use '<' instead of '>' *
            {                            
                swap = array[c];
                array[c] = array[c + 1];
                array[c + 1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (b = 0; b < a; b++)
        printf("%d\n", array[b]);

    return 0;
}