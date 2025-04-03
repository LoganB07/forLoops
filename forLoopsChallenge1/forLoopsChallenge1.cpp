#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int num {0};

    cout << "Please enter a number: ";
    cin >> num;

    int evenSum {0};

    for (int i {0}; i <=num; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        }
    }

    cout << "The sum of all even numbers: " << evenSum << endl;
    return 0;
}
