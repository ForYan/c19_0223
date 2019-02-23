#include <stdio.h>
#include <stdlib.h>
#include "test.h"
//给一个整形数，依次打印出每一位
//例如：整数1234，依次打印1 2 3 4
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
//调用一个函数，每调用一次，num值就+1
//int main(){
//	int a = 0;
//	Fun(&a);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}