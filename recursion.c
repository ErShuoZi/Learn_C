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

//int my_strlen(char* str) {
//	if(*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//
////�ݹ飬���»�С
////my_strlen("bit")
////1 + my_strlen("it")
////1 + 1 + my_strlen("t"); 
////1 + 1 + 1 + my_strlen("")
//// 1+1+1+0 = 3 
//int main() {
//	char arr[] = "bit";
//	
//	//���ַ�������(��������ʱ����)
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ���һ�������飬���ǵ�һ��Ԫ�صĵ�ַ 
//	printf("len = %d\n",len);
//	return 0;
//} 

//��n�Ľ׳�

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


//���n������쳲�������
//������n��쳲���������  fn(n) = fn(n - 1) +fn(n - 2) 

//���ִ��˻ᳬʱ 
//int fac(n) {
//	if(n <= 2){
//		 return 1;
//	}
//	else {
//		 return fac(n - 1) + fac(n - 2 );
//	}
//}
// �Ż���  ���ö�̬�滮�ķ�ʽ 
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
