#include <iostream>
using namespace std;

main()
{
    int sum = 0;

    for (int count = -1; count <= 5; count = count + 1)
    {
        sum = sum + count;
    }
    cout << sum;
}