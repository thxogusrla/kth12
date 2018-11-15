#include<iostream>
#include<cstring>
using namespace std;
class cstring
{
private:
	char *pstr;
	int len;
public:
	cstring(char *str) {
		len = strlen(str); //길이를 측정하고
		pstr = new char[len + 1]; // 그 길이만큼 NULL이 들어갈것을 생각하고 +1 해서 배열을 동적 할당해주고.
		strcpy(pstr, str); cout << "cstring 생성자" << endl; // 동적 할당된 곳에 str을 복사해준다.
	}
		~cstring() { delete[]pstr; cout << "cstring 소멸자" << endl; }
};
class cmystring :public cstring
{
private:
	char *pmystr;
	int mylen;

public:
	cmystring(char *str1, char *str2) :cstring(str1) //생성자잖아.
	{
		mylen = strlen(str2);
		pmystr = new char[mylen + 1];
		strcpy(pmystr, str2); cout << "cmystring 생성자" << endl;
	}
	~cmystring() { delete[]pmystr; cout << "cmystring 소멸자 "<< endl; }
};