#include <string.h>
//复制字符串 
//int main(){
//	char arr1[] = "haha";
//	char arr2[20] = "#########";
//	strcpy(arr2,arr1); 
//	printf("%s\n",arr2);
//	return 0； 
//} 

//memset
//int main(){
//	char arr[] = "hello world";
//	memset(arr,'*', 5); 
//	printf("%s\n",arr);
//	return 0; 
//}  

//打印99乘法表
 
// void main() {
// 	//
// 	for(int i= 1;i<= 9;i++){
//	 	//TODO
//	 	for(int j =	1;j <= i;j++){
//		 	//TODO
//		 	printf("%d x %d = %d\t",j,i,j*i);
//		 }
//		 printf("\n");
//	 }
// } 

//void Swap1(int x,int y) {
//	int tmp = 0;
//		tmp = x;
//		x = y;
//		y = tmp;
//}

//指针类型int* 
void Swap2(int* px,int* py) {
	int tmp = 0;
		tmp = *px;
		*px = *py;
		*py = tmp;
}

int main() {
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a = %d b = %d\n",a,b);
	Swap2(&a,&b);
//	tmp = a;
//	a = b;
//	b = tmp;
	printf("a = %d b = %d\n",a,b);
}
