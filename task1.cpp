#include <iostream>
using namespace std;

void sortSquares(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * arr[i];

    sort(arr, arr + n);
}

int main()
{
    int arr[] = { 3, 5, 8, 2, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sortSquares(arr, n);

    cout << "\nSorted Array " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}