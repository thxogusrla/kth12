#include<stdio.h>
// 5 -> 1 + 2 + 3 + 4 + 5
int get_tri_number(int n)
{
	if (n == 1) return 1;
	else if(n>0) return (n + get_tri_number(n - 1)); //n �� 0�̸� ���� �Ǵ� �ų�.
	//5 + grt(4) -> 5 + 4 + get(3)
}
int main()
{
	int k;
	printf("k�� ���� �Է��Ͻÿ� :");
	scanf("%d",&k);
	printf("%d ", get_tri_number(k));

}
