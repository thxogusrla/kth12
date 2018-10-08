#include<iostream>
using namespace std;
class carray
{
private:
	int *p = new int[5];
	int i;
public:
	carray() {
		for (i = 0; i < 5; i++) p[i] = i;
	}	
	void print()
	{
		for (i = 0; i < 5; i++)
			cout << p[i] << " ";
		cout << endl;
	}
	friend carray &operator+(carray &ar1);  //전역함수로 만들려면 인자가 한개 있어야지
	friend carray &operator-(carray &ar1);
};
carray &operator+(carray &ar1) //ar1 클래스 변수가 생성되었고 참조역할을 하지. 그러면서 ar1의 p[5]가 생성되고 각각에 0 1 2 3 4가 저장되었지.
{
	int *op = new int[5]; // 0 1 2 3 4 -> 4 0 1 2 3
	for (int i = 0; i < 5; i++) op[i] = ar1.p[i];
	for (int i = 0; i < 5; i++)
	{
		if (i == 0) ar1.p[i] = op[4];
		else ar1.p[i] = op[i - 1];
	}	return ar1;
}
carray &operator-(carray &ar1) //ar1 클래스 변수가 생성되었고 참조역할을 하지. 그러면서 ar1의 p[5]가 생성되고 각각에 0 1 2 3 4가 저장되었지.
{
	int *op = new int[5]; // 0 1 2 3 4 -> 1 2 3 4 0
	for (int i = 0; i < 5; i++) op[i] = ar1.p[i];
	for (int i = 0; i < 5; i++)
	{
		if (i == 4) ar1.p[i] = op[0];
		else ar1.p[i-1] = op[i];
	}	return ar1;
}
int main()
{
	carray ary1;
	ary1.print();

	carray ary2 = +ary1;
	ary1.print();
	ary2.print();
	-(-ary1);  //-ar1 = ar1.operator-()
	ary1.print();
}
/*함수 자체가 반환이 된거면 그 함수 안에 있는 값들을 모두 사용 할 수 있는건가?? 그렇다면 반환되는 함수 안에 있는 지역변수들은 사라지지 않는건가?*/