#include<iostream>
#include<cstring>
using namespace std;
class cstring
{
private:
	int len;
	char *str;
public:
	cstring(const cstring &string) //���� ������. //showstring�Լ��� ���� ��������ڸ� ����
	{
		len = string.len; //���� ���ڿ��� ���̸� ���Ѵ�.
		str = new char[len + 1]; //���ڿ����� +1(null�� )�� �� ��ŭ ���� �Ҵ��Ѵ�.
		strcpy(str, string.str); //�׸��� string�� ����� ���ڿ��� str�� �����Ѵ�.
		cout <<"����:"<< str << endl;
	}
	cstring(const char *s = "unknown") //const ���ڿ� �����ʹ� ����Ű�� ���� �ٲ� �� ������ ���� �����ϴ� ���� �����ϴ�. 
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	~cstring() { delete[]str; }
	void print() { cout << str << endl; }
};
void showstring(cstring str) //���� ���� ����, ���� ����
{
	str.print();
}
int main()
{
	cstring s = "c++ programming";
	cstring s1(s); //���� �������� ���� ����:
	s.print();
	showstring(s1);

}