#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int num {0};
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is prime
    bool isPrime {true};

    for (int i {2}; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
    }
    cout << boolalpha;
    cout << "The number " << num << " is prime: " << isPrime << endl;
    return 0;
}
