#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size :  ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the numbers : ";
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    int secondMax = arr[0];
    int secondMin = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > secondMax && arr[i] < max)
            secondMax = arr[i];
        if (arr[i] < secondMin && arr[i] > min)
            secondMin = arr[i];
    }
    delete[] arr;
    cout << "Second Lowest: " << secondMin << endl;
    cout << "Second Highest: " << secondMax << endl;
    return 0;
}