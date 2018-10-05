#include<iostream>
using namespace std;
class ctime
{
private:
	int hour, minute;
	int second;
public:
	ctime(int a, int b, int c) : hour(a), minute(b), second(c) {  
		if (minute > 60) 
		{
			hour++; 
			minute = minute - 60; 
		}
		if (second > 60) {  
			minute++; 
			second = second - 60; 
		}
	}
	void print() { cout << hour << "½Ã" << " " << minute << "ºÐ" << " " << second << "ÃÊ" << endl; }
	friend ctime operator+(const ctime &p1, const ctime &p2); 
};
ctime operator+(const ctime &p1, const ctime &p2)
{
	return ctime(p1.hour + p2.hour, p1.minute + p2.minute, p1.second + p2.second);
}
int main()
{
	ctime time1(4, 50, 40);
	ctime time2(3, 40, 30);
	ctime time3 = time1 + time2;
	
	time1.print();
	time2.print();
	time3.print(); 
	
	return 0;
}