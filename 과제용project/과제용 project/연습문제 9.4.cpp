#include<iostream>
using namespace std;
class B
{
public:
	B() {}
	virtual void p() { cout << "B::p()" << endl; } //p()�� virtual�� �پ��� ������ �����Լ��� �Ǿ��� 
	void q() { cout << "B::q()" << endl; }
};
class D : public B
{
public:
	D() {}
	virtual void p() { cout << "D::p()" << endl; } //B�� ���� ��ӹ��� D�� p()�� virtual ������ �Ǿ����� �ʾƵ� �ڵ����� �����Լ��� �ȴ�.
	void q() { cout << "D::q()" << endl; }
};
/*
base Ŭ�������� �����Լ��� ������شٸ� derived Ŭ������ �ڵ����� �����Լ��� �ȴ�. 
�� ��� �������̽��� ���ٴ� �����Ͽ� �ڵ����� �����Լ����ȴ�.
*/
int main()
{
	B b;
	D d; //class D��  B���� ��ӹ޾Ҵ�. p�� virtual ����� �޾Ұ� q�� �Ϲ��Լ��� ����� �޾Ҵ�.
	B *pb = new B(); //pb�� B�� ����Ű�ڳ� 
	B *pd = new D(); //pd�� B�� ��ü������ �������̱� ������ D�� �޴´�.
	D *pd2 = new D();
	//D *pd3 = new B; // �ٿ��ɽ����̾ �ȵǴ°ǰ�?

	b.p(); b.q(); // class B�� ��ü b�� p �� q �Լ��� ȣ��.
	d.p(); d.q(); // D�� p�� ����, B�� q�� ����----- �����ͳ� ������ ������� �ʱ� ������ ���� ����� ������ �ʴ´�.
	pb->p(); pb->q();   // �����ͷ� ���� ������ B�� ��ü�� ���Ǳ� ������ B�� p q �� ȣ���.
	pd->p(); pd->q();   // B��ü�� ������ ���� pd�� D�� ����Ŵ. p�� D�� p�� ���� B�� q�� ����  
	pd2->p(); pd2->q(); // D�� p q�� ����.
	
	return 0;
}

/*
b-> B::p B::q 

d-> D::p D::q

pb-> B::p B::q


pd-> D::p D::q //D::p B::q���̳� ����.. //�� virtual ���� ���� ������ �ѿ� �ɷθ� �Ǵ����ؼ� B::q()�� ����Ǿ���

pd2-> D::p D::q
*/