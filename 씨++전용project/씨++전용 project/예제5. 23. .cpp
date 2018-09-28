#include<iostream>
using namespace std;
class ccircle
{
private:
	double radius;
	const double pi; //변수 pi가 메모리에서 생성될때 초기화를 시켜준다. 그래서 생성자에서 pi를 초기화 시켜줌.
public:
	ccircle(double r = 0) :radius(r),pi(3.14) {} //const변수 pi초기화.
	void setradius(double r) { radius = r; }
	double getarea()  const { return (pi * radius * radius); } //const는 함수명과 함수몸체 사이에 선언해준다. 이게 방식인가 보다.

};
int main()
{
	ccircle cir1(1);
	cout << "면적 :" << cir1.getarea() << endl;
	return 0;
}