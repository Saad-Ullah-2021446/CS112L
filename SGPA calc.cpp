# include <iostream>
# include <iomanip>
using namespace std;

struct student
{
	string name;
	string regno;
	string degree;
	double SGPA;
};
double Grades(int);

int main()
{
	int x;
	student std[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the record of student " << i + 1 << " : " << endl << endl;
		cout << "Enter the name : ";
		cin >> std[i].name;
		cout << "Enter the reg.no. : ";
		cin >> std[i].regno;
		cout << "Enter the degree program : ";
		cin >> std[i].degree;
		cout << "Enter the number of courses : ";
		cin >> x;
		double GPA = 0;
		int marks;
		for (int i = 0; i < x; i++)
		{
			cout << "Enter the marks of course " << i + 1 << " : ";
			cin >> marks;
			if (marks < 0 || marks>100)
			{
				while (marks < 0 || marks>100)
				{
					cout << "Invalid input.Enter again : ";
					cin >> marks;
				}
			}
			GPA += Grades(marks);
		}
		std[i].SGPA = (GPA * 3) / (x * 3);
	}
	cout << "S.No." << setw(20) << "Name" << setw(20) << "Reg.No." << setw(20) << "Degree Program" << setw(20) << "SGPA" << endl << endl;
	
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << setw(20) << std[i].name << setw(20) << std[i].regno << setw(20) << std[i].degree << setw(20) << std[i].SGPA << endl << endl;
	}
}
double Grades(int n)
{
	if (n > 90)
		return 4;
	else if (n > 85)
		return 3.67;
	else if (n > 80)
		return 3.33;
	else if (n > 75)
		return 3;
	else if (n > 70)
		return 2.67;
	else if (n > 65)
		return 2.33;
	else if (n > 60)
		return 2;
	else if (n > 55)
		return 1.67;
	else if (n > 50)
		return 1.33;
	else
		return 0;
}