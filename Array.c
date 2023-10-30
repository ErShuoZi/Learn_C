//一维数组 
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for(int i=0;i<sz;i++){
//		printf("&arr[%d] = %p\n",i,&arr[i]);
//	}
//	return 0;
//} 

//二维数组
int main() {
	int arr[3][4] = {{1,2,3},{4,5}};
	//	int arr[3][4] = {{1,2,3},{4,5}};
	//	char ch[3][5];
	//error
	//int arr[][] ={1,2,3,4,5,6,7,8};
	//二维数组下标不可省略列 ，行可以省略  
//	int arr[][4] ={{1,2,3,4},{5,6,7,8}};

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
		printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);  
		}
		printf("\n");
	} 
	
	return 0;
}  
