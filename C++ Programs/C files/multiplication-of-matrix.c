#include <stdio.h>

int main()
{

    int row1, col1, row2, col2, c, d, k, sum = 0; // c, d, k are iterator for loops
    int first[10][10], second[10][10], multiply[10][10];

    printf("Enter number of rows and columns of 1st matrix\n");
    scanf("%d%d", &row1, &col1);
    printf("Enter elements of 1st matrix\n");

    for (c = 0; c < row1; c++)
        for (d = 0; d < col1; d++)
            scanf("%d", &first[c][d]);

    printf("Enter number of rows and columns of 2nd matrix\n");
    scanf("%d%d", &row2, &col2);

    if (col1 != row2)
        printf("The multiplication isn't possible.\n");
    else
    {
        printf("Enter elements of 2nd matrix\n");

        for (c = 0; c < row2; c++)
            for (d = 0; d < col2; d++)
                scanf("%d", &second[c][d]);
        // multiplying matrix
        for (c = 0; c < row1; c++)
        {
            for (d = 0; d < col2; d++)
            {
                for (k = 0; k < row2; k++)
                {
                    sum = sum + first[c][k] * second[k][d];
                }

                multiply[c][d] = sum;
                sum = 0;
            }
        }

        printf("Product of the matrices:\n");

        for (c = 0; c < row1; c++)
        {
            for (d = 0; d < col2; d++)
                printf("%d\t", multiply[c][d]);

            printf("\n");
        }
    }

    return 0;
}