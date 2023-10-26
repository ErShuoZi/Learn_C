#include <string.h>
#include <math.h>
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
//void Swap2(int* px,int* py) {
//	int tmp = 0;
//		tmp = *px;
//		*px = *py;
//		*py = tmp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a = %d b = %d\n",a,b);
//	Swap2(&a,&b);
////	tmp = a;
////	a = b;
////	b = tmp;
//	printf("a = %d b = %d\n",a,b);
//}
//是素数返回1 or 0 
// isPrime(int n) {
//	int j = 0;
//	for(j = 2;j <= sqrt(n);j++){ 
//		//TODO  
//		if(n % j == 0){
//			return 0;
//		}
//		return 1;
//	} 
//}
//
//int main() {
//	int i = 0;
//	for(i=100;i<=200;i++){
//		//判断是否素数
//	if(	isPrime(i)  == 1){
//		//TODO
//		printf("%d ",i);
//	} 
//	}
//	return 0;
//} 



int binary_serch(int arr[],int k,int arrLength) {
	//二分查找
	int left = 0;
	int right = arrLength - 1;
	while(left <= right){
		int middle = (left + right) / 2;
		if(arr[middle] < k) {
			left = middle + 1;
		}
		else if(arr[middle] > k) {
			right = middle - 1;
		}
		else {
			return middle;
		}
	} 
	 return -1;
}


int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 17;
	int arrLength = sizeof(arr) / sizeof(arr[0]);
	int ret =  binary_serch(arr,k,arrLength);
	if(ret == -1)  {
		printf("找不到指定数字"); 
	}
	else {
		printf("%d\n",ret);
	}
	return 0;
} 
