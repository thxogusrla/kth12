#include<iostream>
using namespace std;
int getarea(int x, int y) //�Ű������� ������ ���� �Ǵ� Ÿ���� �ٸ��Ƿ� �Լ� �����ε��� ����
{
	return x * y;
}
double getarea(double r)
{
	return 3.14 * r * r;
}
int main()
{
	int x, y; // ����, ����
	double r; // ������
	int area;
	while (1) {
		cout << "����Ϸ��� ����� ���� �Ͻÿ� 1(���簢��), 2(���� ����) (�����Ϸ��� -1) : ";
		cin >> area;
		if (area == 1)
		{
			cout << "���ο� ���θ� �Է��Ͻÿ� :";

			cin >> x >> y;
			cout << "���簢���� ���� : " << getarea(x, y) << endl;
		}
		else if (area == 2)
		{
			cout << "�������� �Է��Ͻÿ� :";
			cin >> r;
			cout << "���� ���� = " << getarea(r) << endl;
		}
		else if (area == -1) {
			cout << "����Ǿ����ϴ�."; break;
	}
		else cout << "�ٽ� �Է��Ͻÿ� "<<endl;
	}
}