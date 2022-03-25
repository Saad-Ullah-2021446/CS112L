# include <iostream>
# include <string>

using namespace std;

class coordinator;

class person
{
private:
	string name;
public:
	friend class coordinator;
};

class coordinator
{
private:
	person p1, p2;
public:
	void setter()
	{
		cout << "Enter the competition and university name : ";
		getline(cin, p1.name);
		cout << "Enter the competition and university name : ";
		getline(cin, p2.name);
	}
	int check()
	{
		int i = 0, j = 0;
		for (; p1.name[i] != '\0'; i++)
		{
			if (p1.name[i] == ' ')
			{
				for (; p2.name[j] != '\0';j++)
				{
					if (p2.name[j] == ' ')
					{
						while (p1.name[i] != '\0' && p2.name[j] != '\0')
						{
							if (p1.name[i] == p2.name[j])
								i++, j++;
							else
								break;
						}
						break;
					}
				}
				break;
			}
		}
		if (p1.name[i] == '\0' && p2.name[j] == '\0')
			return 1;
		else
			return 0;
	}
	int max_length()
	{
		int i = 0, j = 0;
		for (; p1.name[i] != ' '; i++)
			continue;
		for (; p2.name[j] != ' '; j++)
			continue;		
		if (i > j)
			return i;
		else if (i <= j)
			return j;
	}
};


int main()
{
	coordinator c;
	c.setter();
	if (c.check() == 1)
		cout << "Message from coordinator Person 1 and Person 2 are roommates, and the room number is : " << c.max_length() << endl;
	else
		cout << "Message from coordinator Person 1 and Person 2 are not roommates." << endl;
}