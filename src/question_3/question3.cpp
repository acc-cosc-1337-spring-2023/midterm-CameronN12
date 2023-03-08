#include "question3.h"
#include<iostream>

bool test_config()
{
    return true;
}

int roll_dice()
{
    int value = rand();
    if(value <= 6 && value >=1)
    {
        return value;
    }
    else
    {
        return 0;
    }
}