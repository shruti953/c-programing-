#include <stdio.h>

int main()
{
    int choice;

    do
    {
        float radius, length, width, side, area;

        printf("\n===== AREA CALCULATOR =====\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Square\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter radius of circle: ");
                scanf("%f", &radius);
                area = 3.14 * radius * radius;
                printf("Area of Circle = %.2f\n", area);
                break;

            case 2:
                printf("Enter length of rectangle: ");
                scanf("%f", &length);
                printf("Enter width of rectangle: ");
                scanf("%f", &width);
                area = length * width;
                printf("Area of Rectangle = %.2f\n", area);
                break;

            case 3:
                printf("Enter side of square: ");
                scanf("%f", &side);
                area = side * side;
                printf("Area of Square = %.2f\n", area);
                break;

            case 4:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}
