// 하노이타워
// 재귀호출은 if안에 사용, 반복할 때마다 출발, 경유, 도착지 바뀜
#include <stdio.h>
// a는 출발지, b는 경유지, c는 도착지 변수
void HanoiTower(int n, char a, char b, char c) {
	if (n == 1)
		printf("원판 %d, %c -> %c\n", n, a, c); // 1번 이동
	else {
		HanoiTower(n - 1, a, c, b); // (n-1)개를 출발지 -> 경유지, a : 출발지, c : 경유지, b : 도착지
		printf("원판 %d, %c -> %c\n", n, a, c); //  n번 원판 이동
		HanoiTower(n - 1, b, a, c); // (n-1)개를 경유지 -> 도착지, b : 출발지, a : 경유지, c : 도착지
	}
}
int main(void) {
	int n = 4;
	HanoiTower(n, 'A', 'B', 'C'); // A는 출발지, B는 경유지, C는 목적지의 명칭
	return 0;
}