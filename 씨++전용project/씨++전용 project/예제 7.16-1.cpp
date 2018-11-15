#include<iostream>
#include<cstring>
using namespace std;
class cstring
{
private:
	int len;
	char *str;
public:
	cstring(const char *s = "unknown")
	{
		len = strlen(s); //먼저 배열의 길이를 구한뒤
		str = new char[len + 1];
		strcpy(str, s);
	} //생성자를 만들어줌.
	cstring &operator=(const cstring &st)
	{
		len = st.len;
		str = new char[len + 1];
		strcpy(str, st.str);
		return *this;
	}

};
int main()
{
	cstring str1 = "c++ program";
	cstring str2 = "c++";
	cstring str3 = "hello"
}