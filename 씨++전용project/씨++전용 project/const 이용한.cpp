#include<iostream>
using namespace std;
class cshape
{
private:
	int type, len;
	const double pi; //pi�� ����� ���ǰ�
	static int rectcount;
	static int circlecount;
public:
	cshape(int a, int b) :type(a),len(b),pi(3.14)
	{
		if (type == 1) rectcount++;
		else if (type == 2) circlecount++;
		else cout << "���α׷� ����" << endl;
	}
	cshape():pi(3.14) { rectcount++; }
	double getarea() //���̸� ���ϴ� �Լ�
	{
		if (type == 1) return len * len;
		else if (type == 2) return pi * len * len;
	}
	static int getrectcount() //
	{
		return rectcount;
	}
	static int getcirclecount()
	{
		return circlecount;
	}
};

int cshape ::rectcount = 0;
int cshape ::circlecount = 0;
int main()
{
	cshape s1(1, 5);
	cshape s2(2, 5);
	cshape *prect = new cshape[3]; 
	cout << "�簢���� ���� :" << cshape::getrectcount() << endl;
	cout << "�� ���� :" << cshape::getcirclecount() << endl;
	cout << "���� ���� :" << s1.getarea() << endl;
	delete[]prect;

	cout << "�簢���� ���� :" << cshape::getrectcount() << endl;
	cout << "�� ���� :" << cshape::getcirclecount() << endl;
	cout << "���� ���� :" << s2.getarea() << endl;
}