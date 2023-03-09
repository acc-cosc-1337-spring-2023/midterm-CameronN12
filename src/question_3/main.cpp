#include<iostream>
#include "question3.h"
using std::cout;

int main()
{
    int option = 0;
    int exit = 0;
    prompt_user(option);
    do
    {

    int num = roll_dice();

    cout<<"Rolling dice..."<<"\n";
    cout<<"The result is: "<<num<<"\n";

    exit = prompt_user(option);
    }
    while(exit != 1);
    return 0;
}