// �ϳ���Ÿ��
// ���ȣ���� if�ȿ� ���, �ݺ��� ������ ���, ����, ������ �ٲ�
#include <stdio.h>
// a�� �����, b�� ������, c�� ������ ����
void HanoiTower(int n, char a, char b, char c) {
	if (n == 1)
		printf("���� %d, %c -> %c\n", n, a, c); // 1�� �̵�
	else {
		HanoiTower(n - 1, a, c, b); // (n-1)���� ����� -> ������, a : �����, c : ������, b : ������
		printf("���� %d, %c -> %c\n", n, a, c); //  n�� ���� �̵�
		HanoiTower(n - 1, b, a, c); // (n-1)���� ������ -> ������, b : �����, a : ������, c : ������
	}
}
int main(void) {
	int n = 4;
	HanoiTower(n, 'A', 'B', 'C'); // A�� �����, B�� ������, C�� �������� ��Ī
	return 0;
}