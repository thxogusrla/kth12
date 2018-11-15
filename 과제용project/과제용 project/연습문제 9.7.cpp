#include<iostream>  
using namespace std;
class base
{
public:
	base() { cout << "base::base()" << endl; } //���ڰ� �ϳ��� ���� ������.
	base(int n) { cout << "base::base(" << n << ")" << endl; } //int n ���ڸ� ������ ������.
};
class derived:public base
{
private:
	base b; //��ü�� ������ ���ÿ� �����ڰ� ȣ���̵�.
//	base b(1); ������ �ǰ� �� �Ʒ��� ���� ����?
public:
	derived() { cout << "D::D()" << endl; }
	derived(int n): base(n){ //�ʱ�ȭ�������� base::base(3)�� ȣ��
		base btemp(-n); 
		//b = btemp; //�̰� ��� ���ַ��� �س������� ?
		cout << "derived::derived(" << n << ")" << endl; //
	}
};
int main()
{
	derived d(3); //d(3)�� ���� �����ڰ� ��������� �״��� base b�� �����ڰ� ���������.
	return 0;
}
/*
base::base(3)
base::base()
base::base(-3)
derived::derived(3)
*/