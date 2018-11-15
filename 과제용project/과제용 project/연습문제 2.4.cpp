#include<iostream>
using namespace std;
class cpointx {
protected:
	int x;
public:
	cpointx(int a) : x(a) { cout << "cpointx �� ������" << endl; }
	~cpointx() { cout << "cpointx �Ҹ���" << endl; }
	void print() { cout << "cpointx" << endl; }
};
class cpointxy : public virtual cpointx {
protected:
	int y;
public:
	cpointxy(int a, int b) :cpointx(a), y(b) { cout << "cpointxy ������" << endl; }
	~cpointxy() { cout << "cpointxy �Ҹ���" << endl; }
	void print() { cout << "cpointxy" << endl; }
};
class cpointxz :virtual public cpointx {
protected:
	int z;
public:
	cpointxz(int a, int b) :cpointx(a), z(b) { cout << "cpointxz ������" << endl; }
	~cpointxz() { cout << "cpointxz �Ҹ���" << endl; }
	void print() { cout << "cpointxz" << endl; }
};
class cpointxyz :public cpointxy, public cpointxz {
protected:
	int xyz;
public:
	cpointxyz(int a, int b, int c) : cpointxy(a, b), cpointxz(a, c), xyz(0), cpointx(a) { cout << "cpointxyz ������" << endl; }
	~cpointxyz() { cout << "cpointxyz �Ҹ���" << endl; }
	void print() {
		//cout << "x : " <<x << endl;
		cpointx::print();
		cpointxy::print();
		cpointxz::print();
		cout << "cpointxyz" << endl;
	}
};
int main() {
	cpointxyz pxyz(1, 2, 3);
	pxyz.print();
	return 0;
}
// virtual ����� �� cpointx�� xyz�� �Ѱ��� �����ϰ� �Ǹ� �����ڵ� �ϳ��� ������ �ȴ�.
//���� �˾Ƽ� ��ġ�� ����.. 8.5���̿���