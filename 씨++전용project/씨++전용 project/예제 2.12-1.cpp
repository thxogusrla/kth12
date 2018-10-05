/*p[4][5]인 배열을 동적할당하라.*/
#include<iostream>
using namespace std;
int main()
{
	int **p; //이중 포인터를 선언한 이유는 2차원 배열을 선언하기 위해서.
	p = new int *[4]; //*p[0] , *p[1] , *p[2] , *p[3] 이됨.
	for (int i = 0; i < 4; i++) // p[i]
	{
		p[i] = new int[5]; //동적할당된 정수형 5개가 p[i]가 가리키는 변수가 됨.
	}
	for(int i = 0 ;i<4; i++)
	delete[]p[i]; // 사용된 공간은 해제가 되지 않으며 남은 공간이 해제가 됨.
 	delete []p;
}