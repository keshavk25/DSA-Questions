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

    for (int i = 0; i < 4; i++)
    {
        int minNumIndex = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[minNumIndex])
                minNumIndex = j;
        }
        swap(arr[i], arr[minNumIndex]);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] <<" ";
}