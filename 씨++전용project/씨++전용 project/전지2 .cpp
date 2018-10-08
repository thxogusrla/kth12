#include<iostream>
using namespace std;
struct A 
{
	int m; //객체 변수.
	static int s; //
	void f(); //
	void f()const {}
	static void fs() {}
	void f2();
	void fc2() const {}
	static void fs2() {}
};
/*
1. struct A 로 선언이 되었는데 바디안에 있는 것들 중 몇개는 무엇때문에 클래스 변수로 보는 건가요? 예로 static int s 같은 경우에 지금 struct A에 선언이 된건데 
클래스 변수로 보는지 잘모르겠습니다. 혹시 이유가  struct 와 class의 다른점이 디폴트 영역차이만 다르고 다 같아서 그냥 일부 경우에 따라서 struct 나 class로 바뀌는 거로 
교수님께서 그냥 설정하신건가요?
2. void f() const {} 여기서 이 함수 몸체가 상수가 되는 건가요? 함수 자체가 상수가 되는 거랑 함수 몸체만 상수가 되는건 무슨 차이가 있는 건가요??
3. 범위 지정 연산자인 ::은 클래스만 쓸수 있어서 struct A로 되어있지만 A::으로 접근한건 cㅣass A로 보면 되는건가요?? 그리고 구조체는 범위 지정연산자를 사용할 수 없는 건가요?
4. 그리고 static 멤버 변수는 왜 this포인터를 가지고 있지 않은건가요? 정적변수이기 때문에 갖지 않는 건가요? 
 */