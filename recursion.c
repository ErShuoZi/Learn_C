#include <stdio.h>


//�ݹ� 
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

//�ݹ飬���»�С
//my_strlen("bit")
//1 + my_strlen("it")
//1 + 1 + my_strlen("t"); 
//1 + 1 + 1 + my_strlen("")
// 1+1+1+0 = 3 
int main() {
	char arr[] = "bit";
	
	//���ַ�������(��������ʱ����)
	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ���һ�������飬���ǵ�һ��Ԫ�صĵ�ַ 
	printf("len = %d\n",len);
	return 0;
} 
