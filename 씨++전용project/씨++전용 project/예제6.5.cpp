#include<iostream>
#include<cstring>
using namespace std;
class cstring
{
private:
	int len;
	char *str;
public:
	cstring(const char*s = "Unknown")
	{
		len = strlen(s);
		str = new char[len + 1]; //+1 �� ������ ������\0�� �߰��ϱ� ����.
		strcpy(str, s);
	}
	~cstring() { delete[]str; }
	void print() { cout << str << endl; }
};
void showstring(cstring str)
{
	str.print();
}
int main()
{
	cstring str1 = "c++ programming";
	showstring(str1);
	return 0;
}