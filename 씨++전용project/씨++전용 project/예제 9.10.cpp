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
		len = strlen(str); //���̸� �����ϰ�
		pstr = new char[len + 1]; // �� ���̸�ŭ NULL�� ������ �����ϰ� +1 �ؼ� �迭�� ���� �Ҵ����ְ�.
		strcpy(pstr, str); cout << "cstring ������" << endl; // ���� �Ҵ�� ���� str�� �������ش�.
	}
		~cstring() { delete[]pstr; cout << "cstring �Ҹ���" << endl; }
};
class cmystring :public cstring
{
private:
	char *pmystr;
	int mylen;

public:
	cmystring(char *str1, char *str2) :cstring(str1) //�������ݾ�.
	{
		mylen = strlen(str2);
		pmystr = new char[mylen + 1];
		strcpy(pmystr, str2); cout << "cmystring ������" << endl;
	}
	~cmystring() { delete[]pmystr; cout << "cmystring �Ҹ��� "<< endl; }
};