/* strcpy(name,str) */
#include<iostream>
#include<string.h>
using namespace std;
class cstudent {
private:
	char name[20];
	int number;
	int age;

public:
	cstudent(const char *str, int a, int b) {
		strcpy(name,str); 
		number = a; 
		age = b; 
	}
	cstudent() {
		strcpy(name, "noname");
		number = 0;
		age = 0;
	}
	void setnumber(int num) { number = num; }
	void setage(int ag) { age = ag; }
	void setname(const char *str) { strcpy(name, str); }
	void print () { cout<< "�̸� :" << name<<" �й� :" << number<< "���� :"<< age << endl; }
};
int main()
{
	cstudent st1("ȫ�浿",111111, 25);
	cstudent st2;
	st1.print();
	st2.print();
	st2.setname("����");
	st2.setage(30);
	st2.setnumber(22222);
	st2.print();
	return 0;

}