#include <stdio.h>

void main()
{
    int num1, num2, choice;
    char ch;

    do
    {
        printf("\nEnter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);

        printf("\n1. Addition");
        printf("\n2. Multiplication");
        printf("\n3. Division");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Addition = %d", num1 + num2);
                break;

            case 2:
                printf("Multiplication = %d", num1 * num2);
                break;

            case 3:
                if(num2 != 0)
                    printf("Division = %.2f", (float)num1 / num2);
                else
                    printf("Division by zero is not possible.");
                break;

            default:
                printf("Invalid choice.");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);

    } while(ch == 'y' || ch == 'Y');
}
