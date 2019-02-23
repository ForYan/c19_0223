

void Fun(int* p){
	++*p;
}


//int Divide(int a, int b, int* success){
//	if (b == 0){
//          *success = 0;
//		  return *success;
//	}
//	*success = 1;
//	return a / b;
//}
//int main(){
//	int success = 0;
//	int ret = Divide(10, 0, &success);
//	printf("ret=%d,success=%d", ret, success);
//	system("pause");
//	return 0;
//}

//void Swap(int* x, int* y){
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main(){
//	int x = 10;
//	int y = 20;
//	Swap(&x, &y);
//	printf("%d,%d", x, y);
//	system("pause");
//	return 0;
//}

////写出一个函数求两个整数中的最大值
//int GetMax(int num1, int num2){
//	return num1>num2? num1:num2;
//}
//int main(){
//	int num1;
//	int num2;
//	printf("请输入两个整数：");
//	scanf("%d %d", &num1, &num2);
//	int max = GetMax(num1, num2);
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}