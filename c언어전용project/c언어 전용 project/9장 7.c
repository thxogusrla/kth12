#include<stdio.h>
//��ȯ�ؼ� ������.
int q(int n, int k)
{
	if (k == 0 || k == n) return 1; //1���� �𿩼� ���� �ϼ��Ǵ� �ų� ���� �׷��� ���� ���� �ɸ��� ���η�..?
	return q(n - 1, k - 1) + q(n - 1, k); // 5,3 ->4 2 + 4 3 -> 3 - 1 
} //�ٵ� �̰� ���� �����ϳ�?
int main()
{
	int k, n;
	printf("k�� n���� �Է��Ͻÿ� :");
	scanf("%d  %d",&k,&n);
	printf("%d",q(k,n));
	return 0;
}