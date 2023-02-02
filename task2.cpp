#include <iostream>
using namespace std;
int totalDigits(int number);

main()
{
    int answer;
    int number;
    cout << "Enter number:  ";
    cin >> number;

    answer = totalDigits(number);
    cout << answer;
}

int totalDigits(int number)
{
    int counter = 0;
    while(number > 0)
    {
        number = number / 10;
        counter = counter + 1;
        
    }
    return counter;
}
