#include <iostream>
#include "question4.h"

using std::cout; using std::cin;

int main()
{
    for(int i = 1 ; i > 0 ; i++)
    {
        int num;
        cout << "Enter a value from 1 to 255: ";
        cin >> num;


        std::string result = decimal_to_binary(num);
        if(num >= 1 && num <= 255)
        {
            cout << "Your value in binary: " << result<< "\n";
        }
        else
        {
            cout << "Value is not in range" << "\n";
        }

    }
    return 0;
}