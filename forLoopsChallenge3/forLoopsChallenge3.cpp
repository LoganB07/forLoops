#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int num {0};
    cout << "Enter a number: ";
    cin >> num;

    //Top
    int stars {1};
    int spaces {num - 1};
    for (int i {0}; i < num; i++)
    {
        for (int j {0}; j < spaces; j++)
        {
            cout << " ";
        }

        for (int k {0}; k < stars; k++)
        {
            cout << "*";
        }

        cout << endl;
        stars += 2;
        spaces--;
    }

    stars -= 2;
    spaces++;
    
    //Bottom
    for (int i {0}; i < num - 1; i++)
    {
        stars -= 2;
        spaces++;
        
        for (int j {0}; j < spaces; j++)
        {
            cout << " ";
        }

        for (int k {0}; k < stars; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
    
    return 0;
}
