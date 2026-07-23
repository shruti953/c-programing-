//accept the row and column size of a marix from user ,accept matrix elements and display
#include <stdio.h>

void main()
{
    int i, j, row, col;
    int a[10][10];

    // Accept row and column
    printf("Enter number of row: ");
    scanf("%d", &row);

    printf("\nEnter number of column: ");
    scanf("%d", &col);

    // Accept matrix elements
    printf("\nEnter matrix elements:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix is:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
} 
