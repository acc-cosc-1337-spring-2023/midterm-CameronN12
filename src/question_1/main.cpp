#include <iostream>
#include "question1.h"

using std::cout; using std::cin;

int main()
{
    for(int i = 1 ; i > 0 ; i++)
    {
        int num;
        cout << "Enter sales: ";
        cin >> num;

        int result = get_sales_commission(num);
        cout << "Sales of " << num<< " yields a commission of " << result<< "\n";

    }
    return 0;
}