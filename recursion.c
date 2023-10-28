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

int my_strlen(char* str) {
	if(*str != '\0') {
		return 1 + my_strlen(str + 1);
	}
	else {
		return 0;
	}
}

//递归，大事化小
//my_strlen("bit")
//1 + my_strlen("it")
//1 + 1 + my_strlen("t"); 
//1 + 1 + 1 + my_strlen("")
// 1+1+1+0 = 3 
int main() {
	char arr[] = "bit";
	
	//求字符串长度(不创建临时变量)
	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是一整个数组，而是第一个元素的地址 
	printf("len = %d\n",len);
	return 0;
} 
