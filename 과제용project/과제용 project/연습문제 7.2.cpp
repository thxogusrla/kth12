#include<iostream>
using namespace std;
class ctime
{
private:
	int hour, minute;
	int second;
public:
	ctime(int a, int b, int c) : hour(a), minute(b), second(c) {  //a b c �� ���� �ð� �� �ʷ� �ʱ�ȭ����.
		if (minute > 60) //���� 60���� �Ѵ´ٸ�  =====> else if�� ���� �ȴٸ� �� �� �� �� �Ѵ� 60�� �Ѱ� �Ǹ� �и� if���� ����ǰ� ���� ���� ���� �ʰ� �ȴ�.
		{ 
			++hour; //�ð��� �ϳ� �������ְ�
			minute = minute - 60; //���� 60�� ����.
		}
		if (second > 60) { //�ʰ� 60�ʰ� �Ѵ´ٸ� 
			++minute; //1�� �߰����ְ�
			second = second - 60; //�ʴ� 60�� ���ش�.
		}
	}
	void print() { cout << hour << "��" << " " << minute << "��" << " " << second << "��" << endl; }
	//ctime operator+(const ctime &p1, const ctime &p2) {} // ����Լ��� ���� ���� �����ε�
	friend ctime operator+(const ctime &p1, const ctime &p2); //�����Լ��� ���.
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
	time3.print(); //7 90 70 -> 8�� 31�� 10��
}