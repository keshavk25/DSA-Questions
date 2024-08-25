#include <iostream>
using namespace std;

int main()
{
    int arr[1000] = {};
    int n;
    cout << "Enter the number of element in array : ";
    cin >> n;
    cout << "Enter element : " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        bool swaped = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped++;
            }
        }
        if (swaped == 0)
            break;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] <<" ";
}