#include<cstdio>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a = 0, int b = 0) :x(a), y(b) {}
	friend class ostream;
	friend class istream;

};
class ostream
{
public:
	ostream &operator<<(const cpoint &po)  //복사생성자를 po 만들어주었음. 
	{
		printf("(%d  , %d)\n", po.x, po.y);
		return (*this);
	}
};
class istream
{
public:
	istream &operator>>(cpoint &po) //입력받으면 값이 변함. 클래스 함수 자기 자체를 반환함.
	{
		printf("x와 y 좌표 설정 :");
		scanf("%d   %d",&po.x,&po.y);
		return *this;
	}
};
ostream cout; //디폴트 생성자가 생김.
istream cin;  //디폴트 생성자가 생김.
int main()
{
	cpoint p1(3, 4);
	cout << p1;
	cin >> p1;
	cout << p1;
	return 0;
}