#include<iostream>
using namespace std;
int &print_value(void)
{
	int var = 5; //�������� var�������� 
	return var; //�ٵ� ���������� var�� print_value �Լ��� ���������� ����� ������ var�� ���������� ��ȯ�� ���ڳ� �ᱹ�� �ƹ��͵� ��ȯ�� ���� ����.
} //���� ������ ��ȯ�� �Ǹ� ��� ���ϱ�?

int main()
{
	int &value = print_value();
	cout << value;
}