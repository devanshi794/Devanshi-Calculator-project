#include <stdio.h>

void sum(int a, int b)
{
    printf("\nSum of %d and %d is: %d", a, b, a + b);
}

void sub(int a, int b)
{
    printf("\nSub of %d and %d is: %d", a, b, a - b);
}

void multiply(int a, int b)
{
    printf("\nMultiply of %d and %d is: %d", a, b, a * b);
}

void div(int a, int b)
{
    printf("\nDivision of %d and %d is: %d", a, b, a / b);
}
void mod(int a, int b)
{
    printf("\nmodulo of %d and %d is: %d", a, b, (a % b));
}
int main()
{
    int a, b, choice;

    do
    {

        printf("\nSelect your choice:");
        printf("\nPress 0 for exit");
        printf("\n1. For +");
        printf("\n2. For -");
        printf("\n3. For *");
        printf("\n4. For /");
        printf("\n5. For %%");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice != 0)
        {
            printf("Enter first number: ");
            scanf("%d", &a);

            printf("Enter second number: ");
            scanf("%d", &b);
        }

        switch (choice)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            multiply(a, b);
            break;
        case 4:
            div(a, b);
            break;
        case 5:
            mod(a, b);
            break;
        case 0:
            break;
        default:
            printf("Wrong choice...");
            break;
        }
    } while (choice != 0);

    return 0;
}