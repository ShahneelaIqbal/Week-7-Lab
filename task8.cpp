#include <iostream>
using namespace std;
void printTable(int number);

main()
{
    int number;
    cout << "Enter number:  ";
    cin >> number;
    printTable(number);
}

void printTable(int number)
{
    for (int counter = 1; counter <= 10; counter = counter + 1)
    {
        cout << number << " * " << counter << " = " << number * counter << endl;
    }
}
