#include<cstdio> //iostream �� ������� ����.
using namespace std;
char *endl = "\n";
char *tab = "\t";
class ostream
{
public:
	ostream &operator<<(int val) {
		printf("%d",val);
		return *this;
	}
	ostream &operator<<(char *str) {
		printf("%s",str);
		return *this;
	}
};
class istream
{
public:
	istream &operator >> (int &val)
	{
		scanf("%d",&val);
		return *this;
	}
	istream &operator>>(char *str)
	{
		scanf("%s",&str);
		return *this;
	}
};
ostream cout; // ���� Ŭ���� ����.
istream cin;//���� Ŭ���� ����.
int main()
{
	int a = 5;
	char str[] = "c++ programming";
	cout << a << tab << str << endl;
	cout << "�Է� :";
	cin >> a >> str;
}