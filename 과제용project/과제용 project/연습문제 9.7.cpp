#include<iostream>  
using namespace std;
class base
{
public:
	base() { cout << "base::base()" << endl; } //인자가 하나도 없는 생성자.
	base(int n) { cout << "base::base(" << n << ")" << endl; } //int n 인자를 가지는 생성자.
};
class derived:public base
{
private:
	base b; //객체의 생성과 동시에 생성자가 호출이됨.
//	base b(1); 위에건 되고 왜 아래는 되지 않지?
public:
	derived() { cout << "D::D()" << endl; }
	derived(int n): base(n){ //초기화구문에서 base::base(3)이 호출
		base btemp(-n); 
		//b = btemp; //이건 어떤걸 해주려고 해놓은거지 ?
		cout << "derived::derived(" << n << ")" << endl; //
	}
};
int main()
{
	derived d(3); //d(3)에 대한 생성자가 만들어지고 그다음 base b의 생성자가 만들어진다.
	return 0;
}
/*
base::base(3)
base::base()
base::base(-3)
derived::derived(3)
*/