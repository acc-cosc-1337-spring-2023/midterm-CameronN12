#include "question2.h"
#include <cmath>
using namespace std;

bool test_config()
{
    return true;
}

double get_fahrenheit(double c)
{
    double fahrenheit = 0;
    fahrenheit = (9.0 / 5.0) * c + 32;
    return round(fahrenheit * 100.0) / 100.0;
}