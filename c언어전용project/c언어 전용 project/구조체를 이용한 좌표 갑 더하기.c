#include<stdio.h>
struct point {  //정수형 변수 x,y 를 가지는 구조체 인 point를 만듦
	int x, y;
};
struct point sum(struct point p1, struct point *p2)
{
	struct point po; //구조체 변수인 po를 선언
	po.x = p1.x + p2->x;
	po.y = p1.y + p2->y;
	return po;
}
int main()
{
	struct point a = { 1,2 }; //a.x = 1 이고 a.y = 2
	struct point b = { 2, 3 };
	struct point c;
	c = sum(a, &b);
	printf("%d   %d",c.x,c.y);
}