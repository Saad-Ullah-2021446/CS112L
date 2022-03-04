# include <iostream>

using namespace std;

# define read(x) cout << "Enter the number : ";cin>>x
# define check(x) (x&(x-1))==0?cout <<"Yes, "<<x<<" is a power of 2.":cout <<"No, "<<x<<" is not a power of 2.";

int main()
{
	int x;
	read(x);
	check(x);
}