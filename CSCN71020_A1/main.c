#include <stdio.h>

void printWelcomeMenu(void);
void printOptions(void);
void add(void);
void subtract(void);

int main(void)
{
    printWelcomeMenu();
    printOptions();

    int inputNum;

    printf("Enter operation number: ");
    scanf_s("%d", &inputNum);

    switch (inputNum)
    {
    case 1:
        add();
        break;
    case 2:
        subtract();
        break;
    default:
        printf("Invalid option\n");
        break;
    }

    printf("Press Enter to exit...");
    getchar(); 
    getchar(); 

    return 0;
}

void printWelcomeMenu(void)
{
    printf(" **********************\n");
    printf("**   Welcome to the   **\n");
    printf("**   BCS Calculator   **\n");
    printf(" **********************\n");
}

void printOptions(void)
{
    printf("1. Add\n");
    printf("2. Subtract\n");
}

void add(void)
{
    double num1, num2, result;

    printf("Enter the first value: ");
    scanf_s("%lf", &num1);

    printf("Enter the second value: ");
    scanf_s("%lf", &num2);

    result = num1 + num2;

    printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract(void)
{
    double num1, num2, result;

    printf("Enter the first value: ");
    scanf_s("%lf", &num1);

    printf("Enter the second value: ");
    scanf_s("%lf", &num2);

    result = num1 - num2;

    printf("%lf - %lf = %lf\n", num1, num2, result);
}
