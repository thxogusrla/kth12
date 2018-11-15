#include<iostream>
using namespace std;
class base
{
protected:
	int num;
public:
	base() : num(0) { cout << "생성자 base (" << num << ")" << endl; }
	base(int n) :num(n) { cout << "생성자 base (" << num << ")" << endl; }
	~base() { cout << "소멸자 base (" << num << ")" << endl; }
};
class derived :public base
{
public:
	derived() { cout << "생성자 derived(" << num << ")" << endl; }
	derived(int n) :base(n)
	{
		cout << "생성자 derived (" << num << ")" << endl;
	}
	~derived() { cout << "소멸자 derived(" << num << ")" << endl; }
	void print() { cout << "뭐가 만들어지냐?" << "num값:" << num << endl << "주소(num) :" << &num << endl; }
};
derived d1;
int main()
{
	derived *d2 = new derived(1); //derived(1)이 생성되면서 base0생성자가 만들어짐. base 1생성자가 만들어졌지.
	derived d3(2); //그 다음 base 3 생성자가 만들어지고 그다음 derived 3이 만들어져.
	d2->print();
	cout << d2 << endl;
	delete d2;
}
