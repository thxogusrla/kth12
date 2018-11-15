 #include<stdio.h>
int search(int *a, int size, int serch_value) 
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (a[i] == serch_value) {
			printf("%d번의 사원과 월급이 같습니다.",i);
			return a[i];  //얼마의 금액인지 반환하는 것.
		}
	}
}
int main()
{
	int i, a[5]; //배열의 이름은 포인터 처럼 사용된다.
	int serch_value;
	for (i = 0; i < 5; i++)
	{
		printf("%d번의 사원의 월급을 입력하시오 :",i);
		scanf("%d",&a[i]);
	}
	printf("얼마의 같은 금액인 사원을 찾고 싶음? :");
	scanf("%d",&serch_value);

	printf("같은 월급은 %d만원입니다.",search(a,5,serch_value)); //printf()가 먼저 만들어지고 그다음 return a[i]가 이뤄진다.
}