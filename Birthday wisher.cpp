# include <iostream>

using namespace std;
struct D_O_B
{
	int day;
	string month;
	int year;
};
struct details
{
	string name;
	int age;
	string city;
	D_O_B DateOfBirth;
};
int main()
{
	details d[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the record of user " << i + 1 << endl;
		cout << "Enter the name : ";
		cin >> d[i].name;
		cout << "Enter the age : ";
		cin >> d[i].age;
		cout << "Enter the city : ";
		cin >> d[i].city;
		cout << "Enter the D.O.B" << endl;
		cout << "Enter the day : ";
		cin >> d[i].DateOfBirth.day;
		cout << "Enter the month : ";
		cin >> d[i].DateOfBirth.month;
		cout << "Enter the year : ";
		cin >> d[i].DateOfBirth.year;
	}
	D_O_B check;
	cout << "Enter a date of birth to check " << endl;
	cout << "Enter day : ";
	cin >> check.day;
	cout << "Enter month : ";
	cin >> check.month;
	cout << "Enter year : ";
	cin >> check.year;
	for (int i = 0; i < 3; i++)
	{
		if (d[i].DateOfBirth.day == check.day && d[i].DateOfBirth.month == check.month)
			cout << "It is " << d[i].name << "'s birthday.Happy birthday " << d[i].name << "!" << endl;
		else if(i==2&&(d[i].DateOfBirth.day != check.day || d[i].DateOfBirth.month != check.month))
			cout <<"Today is noone's birthday." << endl;
	}
}