#include<iostream>
using namespace std;
class cpointx{
protected:
	int x;
public:
	cpointx(int a) : x(a) { cout << "cpointx 税 持失切" << endl; }
	~cpointx() { cout << "cpointx 社瑚切" << endl; }
	void print() { cout << "cpointx" << endl; }
};
class cpointxy:public virtual cpointx{
protected:
	int y;
public:
	cpointxy(int a, int b) :cpointx(a), y(b) { cout << "cpointxy 持失切" << endl;}
	~cpointxy() { cout << "cpointxy 社瑚切" << endl; }
	void print() { cout << "cpointxy" << endl; }
};
class cpointxz :virtual public cpointx{
protected:
	int z;
public:
	cpointxz(int a, int b) :cpointx(a), z(b) { cout << "cpointxz 持失切" << endl; }
	~cpointxz() { cout << "cpointxz 社瑚切" << endl; }
	void print() { cout << "cpointxz" << endl; }
};
class cpointxyz :public cpointxy, public cpointxz{
protected:
	int xyz;
public:
	cpointxyz(int a, int b, int c) : cpointxy(a, b), cpointxz(a, c), xyz(0) { cout << "cpointxyz 持失切" << endl; }
	~cpointxyz() { cout << "cpointxyz 社瑚切" << endl; }
	void print()	{
		//cout << "x : " <<x << endl;
		cpointx::print();
		cpointxy::print();
		cpointxz::print();
		cout << "cpointxyz" << endl;
	}
};
int main(){
	cpointxyz pxyz(1, 2, 3);
	pxyz.print();
	return 0;
}