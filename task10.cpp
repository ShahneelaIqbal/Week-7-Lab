#include <iostream>
using namespace std;
float calculateMoneyEven(int age);
float calculateMoneyToy(int age, int toyPrice);

main()
{
    int age;
    float priceOfMachine;
    int toyPrice;
    float answer;
    float answer1;
    float totalSavedMoney;
    float remaining;

    cout << "Enter age:  ";
    cin >> age;
    cout << "Enter price of washing machine:  ";
    cin >> priceOfMachine;
    cout << "Enter price of toy:  ";
    cin >> toyPrice;

    answer = calculateMoneyEven(age);
    answer1 = calculateMoneyToy(age, toyPrice);
    totalSavedMoney = answer + answer1;
    if (totalSavedMoney > priceOfMachine)
    {
        remaining = totalSavedMoney - priceOfMachine;
        cout << "Yes!" << endl
             << remaining;
    }
    else
    {
        remaining = priceOfMachine - totalSavedMoney;
        cout << "No!" << endl
             << remaining;
    }
}

float calculateMoneyEven(int age)
{
    float saveMoney = 0;
    float money = 10.0;
    int evenBirthday = 1;
    for (int count = 1; count <= age; count = count + 1)
    {
        if (count % 2 == 0)
        {
            saveMoney = saveMoney + (evenBirthday * money);
            saveMoney = saveMoney - 1;
            evenBirthday = evenBirthday + 1;
                        
        }
        
    }
    return saveMoney;
}

float calculateMoneyToy(int age, int toyPrice)
{
    float totalToy = 1;
    float totalToyPrice = 0;
    for (int count = 1; count <= age; count = count + 1)
    {
        if (count % 2 != 0)
        {
            totalToyPrice = totalToyPrice + (totalToy * toyPrice);
                      
        }
        
    }
    return totalToyPrice;

}