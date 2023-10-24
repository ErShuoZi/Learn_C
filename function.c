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
 
 void main() {
 	//
 	for(int i= 1;i<= 9;i++){
	 	//TODO
	 	for(int j =	1;j <= i;j++){
		 	//TODO
		 	printf("%d x %d = %d\t",j,i,j*i);
		 }
		 printf("\n");
	 }
 } 
