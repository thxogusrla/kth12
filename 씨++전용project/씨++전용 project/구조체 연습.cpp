#include<iostream>
using namespace std;
 struct point { //����ü ����.
//private:
	int x, y; //������ ����� �Ǹ鼭 ������ �Ұ��� �ȴٸ��̾�. 
	point(int a) {} //strcut �� class �Ѵ� �����ڸ� ������� �ִµ�, �����ڸ� ����� �Ǹ� ����Ʈ �����ڰ� ��������� �ʾ� ������ �����ε��� ���־�� �ɼ��� �ִ�.
	point() : x(0),y(0) {}
};
 struct point sum(const struct point p1,const struct point p2)
{
	struct point po; //�ٵ� po�� �����ϸ鼭 po.x po.y �� ���� �ִµ� �����Ⱚ�� ����ְ� �Ǹ鼭 ������ �Ǿ���. �׷��� ����� �� ���� ����.
	po.x = p1.x + p2.x;
	po.y = p1.y + p2.y;
	return po;
}

int main()
{
	struct point p1, p2;
	struct point c;
	cout << "p1�� x�� y�� ��ǥ�� �Է��Ͻÿ� :";
	cin >> p1.x >> p1.y;
	cout << "p2�� x�� y�� ��ǥ�� �Է��Ͻÿ� :";
	cin >> p2.x >> p2.y;
	c = sum(p1, p2);
	cout << c.x<< " " << c.y;
}