#include<iostream>
using namespace std;
class carray {
private:
	int count;
	int *x;
public:
	carray(int a) { count = a; x = new int[count]; } //ī��Ʈ��ŭ �����Ҵ��� ���� x = new int[count]
	void Delete() { delete[]x; } //x�� �޸� ����
	void print() {
		for (int i = 0; i < count; i++)
		{
			cout << x[i] << endl;
		}
	}
};
int main(void)
{
	carray ary(5);
	ary.print();
	ary.Delete();
	return 0;

}
/*int *x, int count   -> x = new int[count]*/