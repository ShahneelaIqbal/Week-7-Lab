#include <iostream>
using namespace std;

int digitSum(int number);

main()
{
    int number;
    cout << "Enter number:  ";
    cin >> number;

    int answer = digitSum(number);
    cout << answer;
}

int digitSum(int number)
{
    int sum = 0;
    int rem;
    int counter = 0;

    while(number > 0)
    {
      rem = number % 10;
      number = number / 10;
      sum = sum + rem;
            
    }
    return sum;
} 