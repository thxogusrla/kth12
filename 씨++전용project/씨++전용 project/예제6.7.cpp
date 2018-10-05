#include<iostream>
#include<cstring>
using namespace std;
class cstring
{
private:
	int len;
	char *str;
public:
	cstring(const cstring &string) //복사 생성자. //showstring함수를 위해 복사생성자를 만듬
	{
		len = string.len; //먼저 문자열의 길이를 구한다.
		str = new char[len + 1]; //문자열길이 +1(null값 )의 값 만큼 동적 할당한다.
		strcpy(str, string.str); //그리고 string에 저장된 문자열을 str로 복사한다.
		cout <<"복사:"<< str << endl;
	}
	cstring(const char *s = "unknown") //const 문자열 포인터는 가리키는 곳을 바꿀 수 없지만 값을 변경하는 것은 가능하다. 
	{
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	~cstring() { delete[]str; }
	void print() { cout << str << endl; }
};
void showstring(cstring str) //값에 의한 전달, 복사 생성
{
	str.print();
}
int main()
{
	cstring s = "c++ programming";
	cstring s1(s); //복사 생성으로 인해 복사:
	s.print();
	showstring(s1);

}