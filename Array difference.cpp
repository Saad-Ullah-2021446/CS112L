# include <iostream>

using namespace std;

int main()
{
	int size;
	cout << "Enter the size : ";
	cin >> size;
	int* arr = new int[size];
	cout << "Enter the numbers : ";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	while (size > 1)
	{
		size--;
		int* temp = new int[size];
		for (int i = 0; i < size; i++)
			temp[i] = arr[i + 1] - arr[i];
		delete[] arr;
		cout << "The result is : ";
		for (int i = 0; i < size; i++)
			cout << temp[i]<<" ";
		cout << endl;
		arr = temp;	
	}
	return 0;
}