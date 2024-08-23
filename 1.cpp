#include <iostream>
using namespace std;
int main()
{
    int size, target;
    cout << "Enter the size of the array: "; cin >> size; cout << endl;
    int* ar = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of [" << i << "] index: "; cin >> ar[i];
    }

    cout << endl << "Enter the target you want to find in your given array: "; cin >> target; cout << endl;
    cout << "Index Numbers are:\t";
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ar[i] + ar[j] == target)
            {
                cout << i << ", " << j << endl;
                system("pause");
                return 0;
            }
        }
    }

    cout << "No pairs found." << endl;

    delete[] ar;
    cout << endl << endl;
    system("pause");
    return 0;
}

