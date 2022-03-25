# include <iostream>
# include <string>
using namespace std;

class officer
{
private:
	int id;
	string name, rank;
	static int count;
public:
	void setter()
	{
		cout << "Enter the ID of the officer : ";
		cin >> id;
		cin.ignore();
		cout << "Enter the name of the officer : ";
		getline(cin, name);
		cout << "Enter the rank of the officer : ";
		getline(cin, rank);
	}
	int check()
	{
		int j = 0, i = id;
		while (id != 0)
		{
			j *= 10;
			j += id % 10;
			id /= 10;
		}
		if (i == j)
			return 1;
		else
		{
			count++;
			return 0;
		}
	}
	void counter()
	{
		cout << "The number of officers in the restricted area is : " << count << endl;
	}
};

int officer::count = 0;

int main()
{
	officer o;
	while (1)
	{
		int x;
		cout << "Please select the desired option : " << endl << "1. Enter the ID of officer." << endl << "2. Get total number of officers." << endl << "3. Exit." << endl;
		cin >> x;
		if (x == 1)
		{
			o.setter();
			if (o.check() == 1)
				cout << "The officer is not allowed to enter the restricted area." << endl;
			else
				cout << "The officer is allowed to enter the restricted area." << endl;
		}
		else if (x == 2)
			o.counter();
		else if (x == 3)
			break;
		else
			cout << "Invalid input.Enter again." << endl;
	}
}