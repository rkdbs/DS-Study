// ���丮�� ���ϱ� (���ȣ��)
#include <stdio.h>
int factorial(int n) {
	if (n==1) return 1; // ������ ������ ���ѷ��� ���� �ʵ���
	else return n * factorial(n-1); // ���� �� return
}
int main(void) {
	int n = 5; // , factorial = 1;
	// �� Ǯ��
	/*for (int i = n; i >= 1; i--) {
		factorial *= i;
	}*/
	/* ���T Ǯ��
	* ���1 (���� ��� X)
	for(; n>=1; n--) // ; ���� ���� �״�� ����ϰڴ�.
		factorial *= n; // n�� 0�� �� for�� ��������
	* ��� 2�� �� Ǯ�̿� ���� (���� ���)
	* ���3 (�Լ�), ���ȣ�� (���ݻ��)
	* */
	printf("%d!=%d\n", n, factorial(n));
	//return 0; // OS���� ���������� ���ᰡ �Ϸᰡ �Ǿ��ٴ� ���� �� �ϳ�.
}