#include<iostream>
using namespace std;
class cshape
{
private: int type, len;
		 static int reccount;
		 static int circlecount;
		 const int pi;
public: 
	cshape(int a, int b):type(a),len(b),pi(3.14) {
		if (a == 1) reccount++; //���� Ÿ���� ���簢���̶�� ī��Ʈ�ѹ�����
		else if (a == 2) circlecount++; //���̶�� ���� ���� ī��Ʈ �ѹ� ����.
		else { cout << "�߸� �Է� ��� ����."; }
	}
	cshape() :pi(3.14) { reccount++; } //
	static int getrectcount() { return reccount; }
	static int getcirclecount() { return circlecount; }
	double getarea() { if (type == 1) return len * len;
	else return pi * len *len;
	}
};
int cshape::reccount = 0;
int cshape::circlecount = 0;
int main()
{
	cshape s1(1, 5);
	cshape s2(2, 5);
	cshape *prect = new cshape[3]; //prect[0],prect[1],prect[2]�� �����ϱ� �������ڰ� �ϳ��� ���ݾ�. �׸��� class�Լ��� �������ڰ� ���°� ���簢�� ����ϴϱ�.
	cout << "�簢���� ���� :" << cshape::getrectcount() << endl;
	cout << "�� ���� :" << cshape::getcirclecount() << endl;
	cout << "���� ���� :" << s1.getarea() << endl;
	delete[]prect;

	cout << "�簢���� ���� :" << cshape::getrectcount() << endl;
	cout << "�� ���� :" << cshape::getcirclecount() << endl;
	cout << "���� ���� :" << s2.getarea() << endl;
}