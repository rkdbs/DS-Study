// 팩토리얼 구하기 (재귀호출)
#include <stdio.h>
int factorial(int n) {
	if (n==1) return 1; // 조건을 지정해 무한루프 돌지 않도록
	else return n * factorial(n-1); // 현재 값 return
}
int main(void) {
	int n = 5; // , factorial = 1;
	// 내 풀이
	/*for (int i = n; i >= 1; i--) {
		factorial *= i;
	}*/
	/* 재민T 풀이
	* 방법1 (변수 사용 X)
	for(; n>=1; n--) // ; 위의 값을 그대로 사용하겠다.
		factorial *= n; // n이 0일 때 for를 빠져나옴
	* 방법 2는 내 풀이와 같음 (변수 사용)
	* 방법3 (함수), 재귀호출 (지금사용)
	* */
	printf("%d!=%d\n", n, factorial(n));
	//return 0; // OS에게 정상적으로 종료가 완료가 되었다는 사인 중 하나.
}