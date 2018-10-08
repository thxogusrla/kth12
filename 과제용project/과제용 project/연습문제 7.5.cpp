#include<iostream>
using namespace std;
class carray
{
private:
	int *p = new int [5]; //p[5]
public:
	carray() {
		for (int i = 0; i < 5; i++) p[i] = i;
	}
	carray &operator+() { //각 원소를 오른쪽으로 1씩 이동시킴 0 1 2 3 4 -> 4 0 1 2 3
		int *op = new int[5];
		for (int i = 0; i < 5; i++) op[i] = p[i]; //op[5] -> 0 1 2 3 4 이걸 다시 배열 p에 1씩 증가시켜서 저장.
			for (int i = 0; i < 5; i++) //
			{
				if (i == 0) p[i] = op[4];
				else  p[i] = op[i - 1];
			}
		return *this; 
	}
	carray &operator-() { // 0 1 2 3 4 -> 1 2 3 4 0 //함수를 반환해서 어떻게 사용하려는 것일까?
		int *op = new int[5];
		for (int i = 0; i < 5; i++) op[i] = p[i];
		for (int i = 0; i < 5; i++) //op[0][1][2][3][4]
		{
			if (i == 0) p[4] = op[0];
			else p[i - 1] = op[i]; //*주의 : p[i] = op[i+1]은 i가 4일 경우 op[5]가 되기 때문에 사용하지 않음.
		}
		return *this;
	}
	void print() 
	{
		for (int i = 0; i < 5; i++)
			cout << p[i] << " " ;
		cout << endl;
	}

};

int main()
{
	carray ary1;
	ary1.print();

	carray ary2 = +ary1; 
	ary1.print();
	ary2.print();
	-(-ary1);
	ary1.print();
}
/*함수 자체가 반환이 된거면 그 함수 안에 있는 값들을 모두 사용 할 수 있는건가?? 그렇다면 반환되는 함수 안에 있는 지역변수들은 사라지지 않는건가?*/