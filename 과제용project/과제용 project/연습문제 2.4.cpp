#include<iostream>
using namespace std;
class cpointx {
protected:
	int x;
public:
	cpointx(int a) : x(a) { cout << "cpointx 의 생성자" << endl; }
	~cpointx() { cout << "cpointx 소멸자" << endl; }
	void print() { cout << "cpointx" << endl; }
};
class cpointxy : public virtual cpointx {
protected:
	int y;
public:
	cpointxy(int a, int b) :cpointx(a), y(b) { cout << "cpointxy 생성자" << endl; }
	~cpointxy() { cout << "cpointxy 소멸자" << endl; }
	void print() { cout << "cpointxy" << endl; }
};
class cpointxz :virtual public cpointx {
protected:
	int z;
public:
	cpointxz(int a, int b) :cpointx(a), z(b) { cout << "cpointxz 생성자" << endl; }
	~cpointxz() { cout << "cpointxz 소멸자" << endl; }
	void print() { cout << "cpointxz" << endl; }
};
class cpointxyz :public cpointxy, public cpointxz {
protected:
	int xyz;
public:
	cpointxyz(int a, int b, int c) : cpointxy(a, b), cpointxz(a, c), xyz(0), cpointx(a) { cout << "cpointxyz 생성자" << endl; }
	~cpointxyz() { cout << "cpointxyz 소멸자" << endl; }
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
// virtual 상속을 한 cpointx는 xyz에 한개만 존재하게 되며 생성자도 하나만 생성이 된다.
//여건 알아서 고치고 ㅎㅎ.. 8.5번이에요