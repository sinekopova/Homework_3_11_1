#include <iostream>
#include <windows.h>
#include "Greeter.h"

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "¬ведите им€: ";

    std::string name;
    std::cin >> name;

    Greeter greet;
    std::cout << greet.greet(name);
}

