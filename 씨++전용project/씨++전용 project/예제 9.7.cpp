#include<iostream>
using namespace std;
class base
{
private:
	int x;
public:
	void func1() { cout << "base::func1" << endl; }
	void virtual func2() { cout << "base::func2" << endl; }
	void virtual func3() { cout << "base::func3" << endl; }
};
class derived :public base
{
private:
	int y;
public:
	void func1() { cout << "derived::func1" << endl; }
	void  func2() { cout << "derived::func2" << endl; }
	void  func4() { cout << "derived::func4" << endl; }
};
int main()
{
	base *pb1 = new base; // base()로 해도 상관없음.
	base *pb2 = new derived();

	pb2->func1(); // base::func1이 출력 가상함수가 아니기 때문.
	pb2->func2(); //derived::func2가 출력 가상함수 이기 때문. 실객체를 따른다.
	pb2->func3(); // base::func3이 출력 되겠지 그 이유는 derived 클래스에 func3에 대한 함수 재정의가 들어있지 않기 때문에.
	//pb2->func4();
}