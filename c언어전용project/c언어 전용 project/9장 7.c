#include<stdio.h>
//순환해서 만들어라.
int q(int n, int k)
{
	if (k == 0 || k == n) return 1; //1값이 모여서 값이 완성되는 거네 ㅅㅂ 그러면 존나 오래 걸리네 씨부레..?
	return q(n - 1, k - 1) + q(n - 1, k); // 5,3 ->4 2 + 4 3 -> 3 - 1 
} //근데 이게 어케 가능하냐?
int main()
{
	int k, n;
	printf("k와 n값을 입력하시오 :");
	scanf("%d  %d",&k,&n);
	printf("%d",q(k,n));
	return 0;
}