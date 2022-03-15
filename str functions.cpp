// string functions

# include <iostream>
# include <string>

using namespace std;

class stringtype
{
private:
	string s1, s2;
public:
	stringtype()
	{
		s1 = " ";
		s2 = " ";
	}
	stringtype(string num1, string num2)
	{
		s1 = num1;
		s2 = num2;
	}
	void setvalues(string str1, string str2)
	{
		s1 = str1;
		s2 = str2;
	}
	void printvalues()
	{
		cout << "The first string is : " << s1 << endl;
		cout << "The second string is : " << s2 << endl;
	}
	int maxlength()
	{
		int i = 0, j = 0;
		while (s1[i] != '\0')
			i++;
		while (s2[j] != '\0')
			j++;
		if (i > j)
			return i;
		else if (j >= i)
			return j;
	}
	int compare(string str1, string str2)
	{
		int i = 0;
		while (str1[i] != '\0' && str2[i] != '\0')
		{
			if (str1[i] == str2[i])
				i++;
			else
				break;
		}
		if (str1[i] == '\0' && str2[i] == '\0')
			return 0;
		else if (str1[i] == '\0')
			return -1;
		else if (str2[i] == '\0')
			return 1;
		else
		{
			while (str1[i] != '\0' && str2[i] != '\0')
				i++;
			if (str1[i] == '\0')
				return -1;
			else if (str2[i] == '\0')
				return 1;
		}
	}
	void copy(string sor, string& des)
	{
		for (int i = 0; sor[i] != '\0'; i++)
			des[i] = sor[i];
	}
	string concatenate(string s1, string s2)
	{
		char s3[100];
		int i = 0, j = 0;
		while (s1[i] != '\0')
		{
			s3[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			s3[i + j] = s2[j];
			j++;
		}
		s3[i + j] = '\0';
		return s3;
	}
	int searchWord(string word)
	{
		bool count = true;
		for (int j = 0; s1[j] != '\0'; j++)
		{
			for (int i = 0; word[i] != '\0'; i++)
			{
				if (s1[j + i] == word[i])
				{
					count = true;
				}
				else
				{
					count = false;
					break;
				}
			}
			if (count)
				break;
		}
		if (count)
			return 1;
		else
			return 0;
	}
	int searchChar(char ch)
	{

		bool count = false;
		for (int i = 0; s1[i] != 0; i++)
		{
			if (s1[i] == ch)
			{
				count = true;

				break;
			}
		}

		if (count)
			return 1;
		else
			return 0;
	}
};

int main()
{
	string str1, str2, str3;
	stringtype str(" ", " ");
	cout << "Enter the first string : ";
	getline(cin, str1);
	cout << "Enter the second string : ";
	getline(cin, str2);
	str.setvalues(str1, str2);
	cout << "Enter the word : ";
	getline(cin, str3);

}