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
	cout << "tv를 켜시겠습니까 ? (o or x)" << endl;
	cin >> a;
	if (my1.turn_tv(a) == 1) cout << "tv가 켜졌습니다." << endl;
	else if (my1.turn_tv(a) == 0) cout << "tv를 키지 않았습니다." << endl;
	else cout << "다시 입력해주세요" << endl;
}