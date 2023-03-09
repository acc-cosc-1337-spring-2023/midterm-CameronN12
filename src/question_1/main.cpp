#include <iostream>
#include "question1.h"

using std::cout; using std::cin;

int main()
{
    int option = 0;
    int exit = 0;
    do
    {
        int num;
        cout << "Enter sales: ";
        cin >> num;

        int result = get_sales_commission(num);
        cout << "Sales of " << num<< " yields a commission of" << result<< "\n";

        exit = prompt_user(option);

        return 0;
    }
    while(exit != 1);

}