#include <stdio.h>
#include <stdlib.h>
#include "test.h"
//��һ�������������δ�ӡ��ÿһλ
//���磺����1234�����δ�ӡ1 2 3 4
void PrintNum(int x){
	if (x > 9){
		PrintNun(x / 10);
	}
	printf("%d ", x % 10);
}
int main(){
	PrintNum(1234);
	system("pause");
	return 0;
}
//����һ��������ÿ����һ�Σ�numֵ��+1
//int main(){
//	int a = 0;
//	Fun(&a);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}