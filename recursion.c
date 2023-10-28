#include <stdio.h>


//递归 
//int main() {
//	printf("hehe\n") ;
//	main();
//	return 0;
//} 
//void print(int n) {
//	if(n > 9) {
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//
//int main() {
//	unsigned int num = 0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//} 

//int my_strlen(char* str) {
//	if(*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//
////递归，大事化小
////my_strlen("bit")
////1 + my_strlen("it")
////1 + 1 + my_strlen("t"); 
////1 + 1 + 1 + my_strlen("")
//// 1+1+1+0 = 3 
//int main() {
//	char arr[] = "bit";
//	
//	//求字符串长度(不创建临时变量)
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是一整个数组，而是第一个元素的地址 
//	printf("len = %d\n",len);
//	return 0;
//} 

//求n的阶乘

//int Fac1(int n) {
//	int i = 0;
//	int ret = 1;
//	for(i=1;i<=n;i++){
//		//TODO
//		 ret *= i; 
//	}
//	return ret;
//}

//int Fac2(int n) {
//	if(n <= 1){
//		//TODO
//		return 1;
//	}
//	else {
//		return n*Fac2(n - 1);
//	}
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac2(n);
//	printf("%d\n",ret);
//	return 0;
//} 


//求第n的数的斐波那契数
//描述第n个斐波那契数列  fn(n) = fn(n - 1) +fn(n - 2) 

//数字大了会超时 
//int fac(n) {
//	if(n <= 2){
//		 return 1;
//	}
//	else {
//		 return fac(n - 1) + fac(n - 2 );
//	}
//}
// 优化版  采用动态规划的方式 
int count = 0; 
int fac(int n) {
	 int a = 1;
	 int b = 1;
	 int c = 1;
	 while(n > 2){
	 	c = a + b;
	 	a = b;
	 	b = c;
	 	n--;
	 } 
	 return c;
}
int main() {
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = fac(n);
	printf("ret = %d\n",ret);
	printf("%d\n", count);
	return 0;
} 
