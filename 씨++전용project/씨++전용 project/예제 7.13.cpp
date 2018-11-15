#include<iostream>
using namespace std;
class cpoint
{
private:
	int x, y;
public:
	cpoint(int a, int b) :x(a), y(b) {}
	friend ostream &operator<<(ostream &out, const cpoint po); //전역함수로 만들어주었자나
	friend istream &operator>>(istream &in,  cpoint &po); 
};
ostream &operator<<(ostream &out, const cpoint po)
{
	out << "(" << po.x << "," << po.y << ")" << endl;
	return out;
 }
istream &operator>>(istream &in, cpoint &po)
{
	cout << "좌표 입력 :";
	in >> po.x >> po.y;
	return in;
}
int main()
{
	cpoint p1(3, 4);
	cout << p1;
	cin >> p1;
	cout << p1;
	return 0;
}