// temperature control

# include <iostream>

using namespace std;

class Heater
{
private:
	int temperature;
public:
	Heater()
	{
		temperature = 15;
	}
	void Warmer()
	{
		temperature += 5;
	}
	void Cooler()
	{
		temperature -= 5;
	}
	void Print()
	{
		cout << "Temperature : " << temperature << endl;
	}
	~Heater(){}
};

int main()
{
	Heater temp;
	while (1)
	{
		int x;
		temp.Print();
		cout << "Enter 1 to make it cooler,2 to make it warmer : ";
		cin >> x;
		if (x != 1 && x != 2)
		{
			while (x != 1 && x != 2)
			{
				cout << "Invalid input.Enter again : ";
				cin >> x;
			}
		}
		if (x == 1)
		{
			temp.Cooler();
			temp.Print();
		}
		else if (x == 2)
		{
			temp.Warmer();
			temp.Print();
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
	return 0;
}