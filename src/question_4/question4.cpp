#include<iostream>
#include<string>
using namespace std;

//
bool test_config()
{
    return true;
}

string decimal_to_binary(int value)
{
    int quotient;
    int remainder;
    string str_binary = "";
    do
    {
        quotient = value / 2;
        remainder = value % 2;
        string str = to_string(remainder);
        char ch = str[0];
        str_binary.push_back(ch);
        value = quotient;
    } while (quotient != 0 || str_binary.length() < 8);

    int strlength = str_binary.length();
    string reversestr;
    for (int i = strlength - 1; i >= 0; i--)
   {
      reversestr.push_back(str_binary[i]);
   }
    //add leading zeros
    return reversestr;
}