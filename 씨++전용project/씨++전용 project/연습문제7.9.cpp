#include<iostream>
using namespace std;

class istream
{
public:
	istream &operator<<(double var)
	{
		printf("%lf",var);
		return *this;
	}
	istream &operator<<(char *str)
	{
		printf("%s",str);
		return *this;
	}
};
class ostream
{
public:
	ostream &operator>>(double var)
	{
		scanf("%lf",&var);
		return *this;
	}
	ostream &operator>>(char *str)
	{
		scanf("%s",str);
		return *this;
	}
};
istream cout;
ostream cin;

int main()
{
	int a = 5;
	char str[] = "c++ programming";
	cout << a << tab << str << endl;
}