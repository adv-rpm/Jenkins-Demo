#include "calculator.h"

int main(void)
{
    volatile int result;

    result = add(10, 20);
    result = multiply(result, 2);
    result = limit_value(result);

    while (1)
    {
    }
}