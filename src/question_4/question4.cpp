#include<iostream>
#include<string>

//
bool test_config()
{
    return true;
}

std::string decinaml_to_binary(int value)
{
    if (value == 0)
    {
        return "0";
    }
    else if (value == 1)
    {
        return "1";
    }
    else if (value%2 == 0)
    {
        return decinaml_to_binary(value/2) + "0";
    }
    else if (value%2 == 1)
    {
        return decinaml_to_binary(value/2) + "1";
    }
}