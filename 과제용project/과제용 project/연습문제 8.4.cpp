#include<iostream>
using namespace std;
class cdate
{
protected:
	int year, month;
	int day;
public:
	cdate(int y, int m, int d) :year(y), month(m), day(d) 
	{
		for (int i = 0; month > 12; i++) 
		{
			month = month - 12; 
			year++;
		}
		for (int i = 0; day > 30; i++) { day = day - 30; month++; }
	}
	void print() 	{	cout << year << "년" << month << "월" << day << "일" << endl;	}
};
class ctime
{
protected:
	int hour, minute, second;
public:
	ctime(int h, int m, int s) : hour(h), minute(m), second(s) 
	{
		for (int i = 0; hour > 24; i++)
		{
			hour = hour - 24;			
		}
		for (int i = 0; minute > 60; i++)
		{
			minute = minute - 60;
			hour++;
		}
		for (int i = 0; second > 60; i++)
		{
			second = second - 60;
			minute++;
		}
	}
	void print() {cout << hour << "시" << minute << "분" << second << "초" << endl;	}
};
class cdate_time :public cdate, public ctime
{
protected:
	const char *todo;
public:
	cdate_time(int dy, int dm, int dd, int th, int tm, int ts,const char *string) :cdate(dy,dm,dd),ctime(th,tm,ts),todo(string){}
	void print()
	{
		cdate::print(); ctime::print();
		cout << todo << endl;
	}
};
int main()
{
	cdate_time dt1(2018, 13, 29, 55, 44, 22,"뭐하지");
	dt1.print();
	return 0;
}