#include<iostream>
using namespace std;
class tv
{
	char trand[50];
	int price;
	char product_company[50];
	int make_time;
public :
	int turn_tv(char a) {
		if (a == 'o') return 1;
		else if (a == 'x') return 0;
		else return -1;
	}
	void turn_ch() {}
	void volume() {}
};
int main()
{
	char a;
	tv my1, my2;
	cout << "tv�� �ѽðڽ��ϱ� ? (o or x)" << endl;
	cin >> a;
	if (my1.turn_tv(a) == 1) cout << "tv�� �������ϴ�." << endl;
	else if (my1.turn_tv(a) == 0) cout << "tv�� Ű�� �ʾҽ��ϴ�." << endl;
	else cout << "�ٽ� �Է����ּ���" << endl;
}