#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
    va_list numbers;
    int sum = 0;
    unsigned int i =0;

    if (n == 0)
        return (0);
    va_start(numbers, n);

    while (i < n)
{
sum += va_arg(numbers, int);
i++;
}
va_end(numbers);
return (sum);
}
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}