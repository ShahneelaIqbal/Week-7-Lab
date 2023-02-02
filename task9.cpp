#include <iostream>
using namespace std;
void printPercentage(int number);

main()
{
    float number;

    cout << "Enter total number:  ";
    cin >> number;
    printPercentage(number);
}

void printPercentage(int number)
{
    float countLessthan200 = 0;
    float countLessthan400 = 0;
    float countLessthan600 = 0;
    float countLessthan800 = 0;
    float countGreaterthan800 = 0;
    float percentage1;
    float percentage2;
    float percentage3;
    float percentage4;
    float percentage5;

    int digits[number];
    for (int counter = 0; counter < number; counter = counter + 1)
    {
        cout << "Enter numbers: ";
        cin >> digits[counter];
    }

    for (int counter = 0; counter < number; counter = counter + 1)
    {
        if (digits[counter] < 200)
        {
            countLessthan200 = countLessthan200 + 1;
        }
        else if (digits[counter] >= 200 && digits[counter] < 400)
        {
            countLessthan400 = countLessthan400 + 1;
        }
        else if (digits[counter] >= 400 && digits[counter] < 600)
        {
            countLessthan600 = countLessthan600 + 1;
        }
        else if (digits[counter] >= 600 && digits[counter] < 800)
        {
            countLessthan800 = countLessthan800 + 1;
        }
        else if (digits[counter] > 800)
        {
            countGreaterthan800 = countGreaterthan800 + 1;
        }
    }

    percentage1 = (countLessthan200 / number) * 100;
    cout << "Percentage less than 200:  " << percentage1 << endl;
    percentage2 = (countLessthan400 / number) * 100;
    cout << "Percentage less than 400:  " << percentage2 << endl;
    percentage3 = (countLessthan600 / number) * 100;
    cout << "Percentage less than 600:  " << percentage3 << endl;
    percentage4 = (countLessthan800 / number) * 100;
    cout << "Percentage less than 800:  " << percentage4 << endl;
    percentage5 = (countGreaterthan800 / number) * 100;
    cout << "Percentage greater than 800:  " << percentage5 << endl;
}