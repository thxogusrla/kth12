#include<iostream>
using namespace std;
class base
{
private:
	int x;
public:
	void func1() { cout << "base::func1" << endl; }
	void virtual func2() { cout << "base::func2" << endl; }
	void virtual func3() { cout << "base::func3" << endl; }
};
class derived :public base
{
private:
	int y;
public:
	void func1() { cout << "derived::func1" << endl; }
	void  func2() { cout << "derived::func2" << endl; }
	void  func4() { cout << "derived::func4" << endl; }
};
int main()
{
	base *pb1 = new base; // base()�� �ص� �������.
	base *pb2 = new derived();

	pb2->func1(); // base::func1�� ��� �����Լ��� �ƴϱ� ����.
	pb2->func2(); //derived::func2�� ��� �����Լ� �̱� ����. �ǰ�ü�� ������.
	pb2->func3(); // base::func3�� ��� �ǰ��� �� ������ derived Ŭ������ func3�� ���� �Լ� �����ǰ� ������� �ʱ� ������.
	//pb2->func4();
}