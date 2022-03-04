// assignment

# include <iostream>
# include <string>
using namespace std;
int power(int, int);
void check(int&);
void convert(int,int&);
void add(int&, int);
void convert_back(int,int&);




int main()
{
	int a, b, x, y, z;

	cout << "Enter the base : ";
	cin >> x;
	check(x);
		cout << "Enter the first number : ";
		cin >> y;
		a = y;
		cout << "Enter the second number : ";
		cin >> z;
		b = z;

	switch (x)
	{
	case 2:
		convert(2, y);
		convert(2, z);
		add(y, z);
		convert_back(2,y);
		break;
	case 8:
		convert(8, y);
		convert(8, z);
		add(y, z);		
		convert_back(8,y);
		break;
	case 10:
		add(y, z);
		break;

	}

	cout << "(" << a << ") + (" << b << ") = " << y;
	return 0;
}
int power(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return x * power(x, y - 1);
}
void check(int& x)
{
	if (x != 2 && x != 8 && x != 10)
	{
		while (x != 2 && x != 8 && x != 10)
		{
			cout << "Invalid input.Enter again : ";
			cin >> x;
		}
	}
}
void convert(int n, int& x)
{
	if (n == 2)
	{
		int dec = 0, i = 0, rem;
		while (x != 0)
		{
			rem = x % 10;
			x /= 10;
			dec += rem * power(2, i);
			i++;
		}
		x = dec;
	}
	else if (n == 8)
	{
		int dec = 0, i = 0, rem;
		while (x != 0)
		{
			rem = x % 10;
			x /= 10;
			dec += rem * power(8, i);
			i++;
		}
		x = dec;
	}
}
void add(int& y, int z)
{
	while (z != 0)
	{
		int carry = y & z;
		y ^= z;
		z = carry << 1;
	}
}
void convert_back(int n, int& x)
{
	if (n == 2)
	{
		int dec = 0, i = 0, rem;
		while (x != 0)
		{
			rem = x % 2;
			x /= 2;
			dec += rem * power(10, i);
			i++;
		}
		x = dec;
	}
	else if (n == 8)
	{
		int dec = 0, i = 0, rem;
		while (x != 0)
		{
			rem = x % 8;
			x /= 8;
			dec += rem * power(10, i);
			i++;
		}
		x = dec;
	}
}
