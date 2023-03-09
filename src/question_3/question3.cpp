#include "question3.h"
#include<iostream>
using std::cout; using std::cin;

bool test_config()
{
    return true;
}

int roll_dice()
{
    int roll;
    int min = 1;
    int max = 6;

    roll = rand() % (max - min + 1) + min;
    
    return roll;
}

int prompt_user(int option)
{
    int exit = 0;
    do
    {    
        auto choice = 'n';
            cout<<"Want to roll? Press 'y' to continue: ";
            cin>>choice;
            if (choice == 'y' || choice == 'Y')
            {
                return 0;
            }
            else
            {
                cout<<"Goodbye!";
                return 1;
            }
    }
    while (exit == 1);
}