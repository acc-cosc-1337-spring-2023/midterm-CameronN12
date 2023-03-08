#include "question1.h"
#include <cmath>
using namespace std;

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
{
    double commission;
    if (sales < 500)
    {
        commission = sales * .05;
    }
    else if (sales <= 999 && sales >= 500)
    {
        commission = sales * .06;
    }
    else if (sales <= 1499 && sales >= 1000)
    {
        commission = sales * .07;
    }
    else if (sales >= 1500)
    {
        commission = sales * .08;
    }
    else
    {
        commission = 0;
    }
    return round(commission);
}