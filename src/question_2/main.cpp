#include <iostream>
#include "question2.h"

using std::cout; using std::cin;

int main()
{
    for(int i = 1 ; i > 0 ; i++)
    {
        int num;
        cout << "Enter celsius: ";
        cin >> num;

        int result = get_fahrenheit(num);
        cout << num << " in Fahrenheit is: " << result<< "\n";

    }
    return 0;
}