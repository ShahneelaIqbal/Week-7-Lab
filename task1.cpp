#include <iostream>
using namespace std;

void print(int number);

main()
{
    int number;
    cout << "enter a number:  ";
    cin >> number;
    print(number);

}
void print(int number)
{
    
    int previous = 0;
    int current = 1;
    int next;
    cout << previous << "," << current << ",";

    for (int count = 1; count <= number - 2; count = count + 1)
    {
        next = previous + current;
        cout << next << ",";
        previous = current;
        current = next;
    }
}
