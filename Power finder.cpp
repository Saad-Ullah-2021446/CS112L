#include <iostream>
#include <string>
#include <bitset>
using namespace std;

#define read(num, num1)  cout << "Please enter num1: ";  cin >> num; cout << "Please enter num2: ";  cin >> num1
#define multiply(num, num1) (cout << "The answer is: " << num * (2 << (num1-1)))

using namespace std;
int main()
{
    int num1, num2;
    read(num1, num2);
    multiply(num1, num2);

    return 0;
}