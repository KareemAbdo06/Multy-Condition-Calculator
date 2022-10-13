#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter the first Number (a) ";
    double first_number;
    cin >> first_number;
    cout << "Enter the second Number (b) ";
    double second_number;
    cin >> second_number;
    double addition = first_number + second_number;
    double subtraction = first_number - second_number;
    double multiplication = first_number * second_number;
    double division = first_number / second_number;
    cout << "a+b = " << addition << endl;
    cout << "a-b = " << subtraction << endl;
    cout << "a*b = " << multiplication << endl;
    cout << "a/b = " << division << endl;

    return 0;
}
