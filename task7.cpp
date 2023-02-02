#include <iostream>
using namespace std;
float calculatePrice(float money, int year);

main()
{
    float money;
    int year;
    float answer;
    
    cout << "Enter money:  ";
    cin >> money;
    cout << "Enter year:  ";
    cin >> year;

    answer = calculatePrice (money, year);
    if (answer > money)
    {
        answer = answer - money;
        cout << "He will need " << answer << " dollars to survive" << endl;
    }
    else
    {
        answer = money - answer;
        cout << "Yes! He will live a carefree life will have " << answer << " dollars left" << endl;
    }

    
}

float calculatePrice(float money, int year)
{
    float total = 0;
    int age = 18;

    for(int counter = 1800; counter <= year; counter = counter + 1)
    {
        if(counter % 2 == 0)
        {
         total = total + 12000;
        }
        
        else
        {
            total = total + 12000 + (50 * age);
        }
        age = age + 1;
    }
    return total;
     


}

