#include <stdio.h>
float operation(int a, int b, char c1)
{
    float c;
    switch (c1)
    {
    case '+': return a+b;
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        c = (1.0*a) / b;
        break;
    default:
        break;
    }
}
int main()
{
    int a, b;
    char c1;
    printf("Enter two nos: ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Enter operator: ");
    scanf(" %c", &c1);
    float c= operation(a, b, c1);
    printf("Result: %.2f", c);
}