#include<iostream>
using namespace std;
int GetArea(int wid, int col) //���ο� ����
{
	return wid * col;
}
double GetArea(int r)
{
	return 3.14 * r * r;
}
int main()
{
	int wid, col; //���ο� ����
	int r; //������
	int shape; // ��缱��
	cout << "���簢�� 1 �� �� 2 �� �����Ͻÿ�(1,2) : " << endl;
	cin >> shape;

	if (shape == 1)
	{
		cout << "���� ���ΰ� �Է� ";
		cin >> wid >> col;
		cout << "���簢���� ���� " << GetArea(wid,col);
	}
	else if (shape == 2)
	{
		cout << "������ �Է�  ";
		cin >> r;
		cout << "���� ���� " << GetArea(r);
	}
	return 0;
}