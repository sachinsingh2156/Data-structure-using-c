#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 40, b = 20, add, sub, mul, div, mod;
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    printf("Addition of a, b is : %d\n", add);
    printf("Subtraction of a, b is : %d\n", sub);
    printf("Multiplication of a, b is : %d\n", mul);
    printf("Division of a, b is : %d\n", div);
    printf("Modlus of a, b is : %d\n", mod);
    return 0;
}
