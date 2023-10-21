//
//  main.c
//  Learn_C
//
//  Created by ErShuoZi on 2023/10/21.
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

//int main(int argc, const char * argv[]) {
//    int age = 100;
//    if(age < 18) {
//        printf("未成年\n");
//    }
//    else {
//        if(age >= 18 && age < 28){
//            printf("青年\n");
//        }
//        else if(age >= 28 && age < 50){
//            printf("壮年\n");
//        }
//        else if(age >= 50 && age < 90){
//            printf("老年\n");
//        }
//        else {
//            printf("老不死\n");
//        }
//    }
//}

//int main(int argc, const char * argv[]) {
//    int age = 10;
//    if(age < 18){
//        printf("未成年\n");
//        printf("不能谈恋爱\n");
//    }
//    else {
//        if(age >= 18 && age < 28){
//            printf("青年\n");
//        }
//        else if(age >= 28 && age < 50){
//            printf("壮年\n");
//        }
//        else if(age >= 50 && age < 90){
//            printf("老年\n");
//        }
//        else {
//            printf("老不死\n");
//        }
//    }
//}

//输出?
//else 和 距离它最近的 if 进行匹配
//int main(int argc, const char * argv[]) {
//    int a = 0;
//    int b = 2;
//    if(a == 1)
//    {
//        if(b == 2)
//        printf("hehe\n");
//    }
//    else
//    printf("haha\n");
//     
//    return 0;
//}

//判断数字是否为奇数
//输出1-100之间的奇数
//int main(int argc, const char * argv[]) {
//    int i = 1;
////    while (i <= 100) {
////        if(i%2 == 1)
////            printf("%d ",i);
////            i++;
////    }
//    
//    while (i <= 100) {
//        printf("%d ",i);
//        i += 2;
//    }
//    return 0;
//}

//int main(int argc, const char * argv[]) {
//    int day = 0;
//    scanf("%d",&day);
    
//    多分支switch
//    switch (day) {
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期日\n");
//            break;
//            
//        default:
//            printf("请输入1-7范围数字\n");
//            break;
//    }
//    if(day == 1)
//        printf("星期一\n");
//    else if(day == 2)
//        printf("星期二\n");
//    else if(day == 3)
//        printf("星期三\n");
//    else if(day == 4)
//        printf("星期四\n");
//    else if(day == 5)
//        printf("星期五\n");
//    else if(day == 6)
//        printf("星期六\n");
//    else if(day == 7)
//        printf("星期日\n");
    
//    return 0;
//}


//循环
//continue 终止本次循环,进行下一次循环;
//int main(int argc, const char * argv[]) {
////    打印1-10
//    int i = 1;
//    while (i < 10)
//    {
//        i++;
//        if(i == 5)
//            continue;
//        printf("%d ",i);
//    
//    }
//       
//    return 0;
//}

//int main(int argc, const char * argv[]) {
////    int ch = getchar();
////    putchar(ch);
////    int ch = 0;
////    while ((ch = getchar()) != EOF) {
////        putchar(ch);
////    }
//    int ret = 0;
//    char password[20] = {0};
//    int ch = 0;
//    printf("请输入密码:>");
//    scanf("%s",password);//输入密码并存放在password数组中
////   输入的密码存到password数组中后,缓冲区还剩余"\n"
////    读取一下"\n"
//    while ((ch = getchar()) != '\n') {
//        ;
//    }
//    printf("请确认(Y/N):>");
//    ret = getchar();
//    if (ret == 'Y') {
//        printf("确认成功\n");
//    }
//    else{
//        printf("放弃确认\n");
//    }
//    return 0;
//}

//int main(int argc, const char * argv[]) {
//    int ch = 0;
//
//    while ((ch = getchar()) != EOF) {
//        if(ch < '0' || ch > '9')
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}


//for 循环
//int main(int argc, const char * argv[]) {
//    for(int i = 1; i <= 10; i++) {
//        printf("%d ",i);
//    }
//    return 0;
//}

////n 的阶乘
//int main(int argc, const char * argv[]) {
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    scanf("%d",&n);
//    for(i = 1; i <= n; i++) {
//        ret = ret * i;
//    }
//    printf("ret = %d\n",ret);
//    return 0;
//}

//1 -3 的阶乘之和
//int main(int argc, const char * argv[]) {
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for(n = 1; n <= 3; n++) {
//        ret = 1;
//        for(i = 1; i <= n; i++) {
//            ret = ret * i;
//        }
//        sum = sum + ret;
//    }
//    printf("%d\n",sum);
//
//    return 0;
//}


//优化
//int main(int argc, const char * argv[]) {
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for(n = 1; n <= 3; n++) {
//        ret = ret * n;
//        sum = sum + ret;
//    }
//    printf("%d\n",sum);
//
//    return 0;
//}


//二分查找
//int main(int argc, const char * argv[]) {
//    int arr[] = {1,2,3,4,5,6,8,9,10,11};
//    int k = 1;
//    int sz  = sizeof(arr) / sizeof(arr[0]); //计算元素的个数,数组的长度;
////    定义双指针
//    int left = 0;//左指针
//    int right = sz - 1; //右指针
//    
//    while (left <= right) {
//        //    算法 二分查找.找中间值
//            int mid = (left + right) / 2;
//        if(arr[mid] > k){
//            right = mid - 1;
//        }
//        
//        else if(arr[mid] < k) {
//            left = mid + 1;
//        }
//               
//        else {
//            printf("找到了.下标是: %d\n",mid);
//            break;
//        }
//    };
//    if(left > right) {
////        越界
//        printf("无法找到该元素\n");
//    }
//    
//
//    return 0;
//}




//int main(int argc, const char * argv[]) {
//    char arr1[] = "good good study!!";
//    char arr2[] = "#################";
//    int left = 0;
////    int right = sizeof(arr1) / sizeof(arr1[0]) - 1; //error
////    [a,b,c] -> [a,b,c,\n] -> [0,1,2,3,4]
////    int right = sizeof(arr1) / sizeof(arr1[0]) - 2; //true
//    long right = strlen(arr1) - 1;
//    while (left <= right) {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        sleep(1);
//        system("clear");//执行系统命令,清空名目
//        left++;
//        right--;
//        printf("%s\n",arr2);
//    }
//    return 0;
//}


int main(int argc, const char * argv[]) {
    int i = 0;
    char password[20];
    for(i = 0; i < 3; i++) {
        printf("请输入密码:>");
        scanf("%s",password);
        if(strcmp(password ,"123456") == 0) { //== 不能用来比较两个字符串是否相等,应该使用库函数 strcmp
            printf("登录成功\n");
            break;
        } else {
            printf("密码错误\n");
        }
    }
    if(i == 3) {
        printf("三次密码输入错误,请退出程序!\n");
    }
    return 0;
}


