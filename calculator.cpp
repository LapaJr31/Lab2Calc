#include "calculator.h"
#include <cmath>

int Calculator::Sqrt(double a)
{
    return std::sqrt(a);
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
