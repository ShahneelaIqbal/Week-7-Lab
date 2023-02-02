#include <iostream>
using namespace std;
int frequencyChecker(int number, int digit);

main()
{
    int number;
    int digit;
    int answer;

    cout << "Enter number:  ";
    cin >> number;
    cout << "Enter digit:  ";
    cin >> digit;

    answer = frequencyChecker(number, digit);
    cout << "Frequency of given digit is:  " << answer << " times" << endl; 
}

int frequencyChecker(int number, int digit)
{
    int counter = 0;
    
    while (number > 0)
    {
        int rem = number % 10;
        if (rem == digit)
        {
            counter = counter + 1;
        }
         number = number / 10;     
    }
    return counter;
}
