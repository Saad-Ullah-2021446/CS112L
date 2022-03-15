// Parity

# include <iostream>

using namespace std;

class parity
{
private:
	int size;
public:
	parity()
	{
		size = 0;
	}
	parity(int num)
	{
		size = num;
	}
	int* arr = new int[size];
	void put(int num)
	{
		size++;
		int* temp = new int[size];
		temp[size - 1] = num;
		delete[] arr;
		arr = temp;
	}
	void print()
	{
		if (size == 0)
			cout << "There are no elements." << endl;
		else
		{
			cout << "The elements are : ";
			for (int i = 0; i < size; i++)
				cout << arr[i];
		}
	}
	void del()
	{
		if (size == 0)
			cout << "There are no elements." << endl;
		else
		{
			size--;
			int* temp = new int[size];
			for (int i = 0; i < size; i++)
				temp[i] = arr[i];
			delete[] arr;
			arr = temp;
		}
	}
	int test()
	{
		if (size % 2 == 0)
			return 1;
		else
			return 0;
	}
	~parity()
	{
		delete[] arr;
	}
};

int main()
{
	int x;
	parity temp(0);
	while (1)
	{
		cout << "\t Main Menu" << endl << endl;
		cout << "1) Enter an element." << endl;
		cout << "2) Print all elements." << endl;
		cout << "3) Delete the last element." << endl;
		cout << "4) Test the array whether it has an even number of elements or odd number of elements." << endl << endl;
		cout << "Enter your desired option : ";
		cin >> x;
		while (x < 1 || x>4)
		{
			cout << "Invalid option.Enter again.";
			cin >> x;
		}
		switch (x)
		{
		case 1:
			int num;
			cout << "Enter the number : ";
			cin >> num;
			temp.put(num);
			break;
		case 2:
			temp.print();
			break;
		case 3:
			temp.del();
			break;
		case 4:
			if (temp.test() == 1)
				cout << "It has an even number of elements.";
			else
				cout << "It has an odd number of elements.";
		}
		char a;
		cout << "Do you want to enter again?Enter y for yes and n for no : ";
		cin >> a;
		while (a != 'y' && a != 'Y' && a != 'n' && a != 'N')
		{
			cout << "Invalid input enter again : ";
			cin >> a;
		}
		if (a == 'y' || a == 'Y')
			continue;
		else if (a == 'n' || a == 'N')
			break;
	}
}