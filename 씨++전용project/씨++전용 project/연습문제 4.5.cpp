#include<iostream>
using namespace std;
class cmyclass {
private:
	int i;
public:
	cmyclass(int a) { i = a; cout << "������: "  << i << endl; }
	~cmyclass() { cout << "�Ҹ���: " << i << endl; }
};
cmyclass m(0); //���� ��ü �����ڰ� ���� ���� ȣ���.
void f(cmyclass localm) {} //�̰� ��������ΰ��� ?
void main()
{
	cmyclass m1(1);
	cmyclass m2[3] = { 2,3,4 }; //�迭 3 �� m2
//	f(m2[2]);  ���� ���Լ�..
}