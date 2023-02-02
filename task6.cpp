#include <iostream>
using namespace std;

int calculateGDC(int number1, int number2);
int calculateLCM(int GDC, int number1, int number2);

main()
{
    int number1;
    int number2;
    int answerGDC;
    int answerLCM;

    cout << "Enter first number:  ";
    cin >> number1;
    cout << "Enter second number:  ";
    cin >> number2;

    answerGDC = calculateGDC(number1, number2);
    answerLCM = calculateLCM(answerGDC, number1, number2);

    cout << "Greatest Common Divisor is:  " << answerGDC << endl;
    cout << "Highest Common Factor is:  " << answerLCM << endl;


}

int calculateGDC(int number1, int number2)
{
    int GDC;
    if(number1 == 0)
    {
        GDC = number2;
    }

    if(number2 == 0)
    {
        GDC = number1;
    }

    if(number1 == number2)
    {
        GDC = number1;
    }

    if(number1 > number2)
    {
        GDC = (number1 - number2);
    }

    if(number1 < number2)
    {
        GDC = (number2 - number1);
    }
    return GDC;
}

int calculateLCM(int GDC, int number1, int number2)
{
    int LCM;
    LCM = (number1 * number2) / GDC;
    return LCM;
}
