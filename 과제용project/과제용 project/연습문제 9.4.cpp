#include<iostream>
using namespace std;
class B
{
public:
	B() {}
	virtual void p() { cout << "B::p()" << endl; } //p()는 virtual이 붙었기 때문에 가상함수가 되었고 
	void q() { cout << "B::q()" << endl; }
};
class D : public B
{
public:
	D() {}
	virtual void p() { cout << "D::p()" << endl; } //B로 부터 상속받은 D는 p()가 virtual 선언이 되어있지 않아도 자동으로 가상함수가 된다.
	void q() { cout << "D::q()" << endl; }
};
/*
base 클래스에서 가상함수를 만들어준다면 derived 클래스는 자동으로 가상함수가 된다. 
단 모든 인터페이스가 같다는 조건하에 자동으로 가상함수가된다.
*/
int main()
{
	B b;
	D d; //class D는  B에게 상속받았다. p는 virtual 상속을 받았고 q는 일반함수로 상속을 받았다.
	B *pb = new B(); //pb가 B를 가리키자나 
	B *pd = new D(); //pd는 B의 객체이지만 포인터이기 때문에 D를 받는다.
	D *pd2 = new D();
	//D *pd3 = new B; // 다운케스팅이어스 안되는건가?

	b.p(); b.q(); // class B의 객체 b의 p 와 q 함수가 호출.
	d.p(); d.q(); // D의 p가 생성, B의 q가 생성----- 포인터나 참조를 사용하지 않기 때문에 가상 기술이 사용되지 않는다.
	pb->p(); pb->q();   // 포인터로 접근 하지만 B의 객체가 사용되기 때문에 B의 p q 가 호출됨.
	pd->p(); pd->q();   // B객체의 포인터 변수 pd는 D를 가리킴. p는 D의 p가 선언 B의 q가 선언  
	pd2->p(); pd2->q(); // D의 p q가 선언.
	
	return 0;
}

/*
b-> B::p B::q 

d-> D::p D::q

pb-> B::p B::q


pd-> D::p D::q //D::p B::q값이네 왜지.. //아 virtual 선언 하지 않으면 겉에 걸로만 판단을해서 B::q()가 선언되었넹

pd2-> D::p D::q
*/