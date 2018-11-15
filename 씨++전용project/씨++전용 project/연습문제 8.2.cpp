#include<iostream>
using namespace std;
class base
{
protected:
	int num;
public:
	base() : num(0) { cout << "������ base (" << num << ")" << endl; }
	base(int n) :num(n) { cout << "������ base (" << num << ")" << endl; }
	~base() { cout << "�Ҹ��� base (" << num << ")" << endl; }
};
class derived :public base
{
public:
	derived() { cout << "������ derived(" << num << ")" << endl; }
	derived(int n) :base(n)
	{
		cout << "������ derived (" << num << ")" << endl;
	}
	~derived() { cout << "�Ҹ��� derived(" << num << ")" << endl; }
	void print() { cout << "���� ���������?" << "num��:" << num << endl << "�ּ�(num) :" << &num << endl; }
};
derived d1;
int main()
{
	derived *d2 = new derived(1); //derived(1)�� �����Ǹ鼭 base0�����ڰ� �������. base 1�����ڰ� ���������.
	derived d3(2); //�� ���� base 3 �����ڰ� ��������� �״��� derived 3�� �������.
	d2->print();
	cout << d2 << endl;
	delete d2;
}
