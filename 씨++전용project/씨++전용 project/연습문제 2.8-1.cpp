#include<iostream>
using namespace std;
typedef int BOOL;
int main()
{
	BOOL bvar1; //정수형으로 취급하고
	bool bvar2; //true of faulse 로 취급.

	bvar1 = (1 < 2) + (2 < 3);
	bvar2 = (1 < 2) + (2 < 3);
	cout << "bvar1 = " << bvar1 << endl;
	cout << "bvar2 = " << bvar2 << endl;
	printf("%d",(1>5)); //부등호 표시가 들어간다면 참이냐 거짓이냐를 따지는 구나.
}