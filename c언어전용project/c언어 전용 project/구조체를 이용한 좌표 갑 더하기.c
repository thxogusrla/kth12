#include<stdio.h>
struct point {  //������ ���� x,y �� ������ ����ü �� point�� ����
	int x, y;
};
struct point sum(struct point p1, struct point *p2)
{
	struct point po; //����ü ������ po�� ����
	po.x = p1.x + p2->x;
	po.y = p1.y + p2->y;
	return po;
}
int main()
{
	struct point a = { 1,2 }; //a.x = 1 �̰� a.y = 2
	struct point b = { 2, 3 };
	struct point c;
	c = sum(a, &b);
	printf("%d   %d",c.x,c.y);
}