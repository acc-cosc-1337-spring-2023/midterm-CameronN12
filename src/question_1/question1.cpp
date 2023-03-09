#include "question1.h"
#include <cmath>
#include <iostream>
using std::cout; using std::cin;

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

int prompt_user(int option)
{
    int exit = 0;
    do
    {    
        auto choice = 'n';
            cout<<"Want another calculation? 'y' for yes, 'n' or no: ";
            cin>>choice;
            if (choice == 'n' || choice == 'N')
            {
                cout<<"Goodbye!";
                return 0;
            }
            else if (choice == 'y' || choice == 'Y')
                return 1;
            else
            {
                cout<<"Invalid option" << "\n";
                exit = 0;
            }
    }
    while (exit == 1);
}