#include <stdio.h>
//输出保留三位小数
// int main(){
//     float num1;
//     scanf("%f",&num1);
//     printf("%.3f",num1);
//     return 0;
// }

//输保留12位小数的浮点数
// int main(){
//     double num1;
//     scanf("%lf",&num1);
//     printf("%.12lf",num1);
//     return 0;
// }

//空格分隔输出
// int main(){
//     char arr;
//     int num1;
//     float num2;
//     double num3;
//     scanf("%c",&arr);
//     scanf("%d",&num1);
//     scanf("%f",&num2);
//     scanf("%lf",&num3);
//     printf("%c %d %.6f %.6lf",arr,num1,num2,num3);
//     return 0;
// }

//输出浮点数
// int main(){
//     double num1;
//     scanf("%lf",&num1);
//     printf("%lf\n",num1);
//     printf("%.5lf\n",num1);
//     printf("%e\n",num1);
//     printf("%g\n",num1);
//     return 0;
// }

//输出字符菱形
// int main(){
//     char lin[5][5];
//     int i,j;
//     int n = 5;
//     int mid = n / 2;//取中间行
//     for(i = 0;i < n;i++){
//         for(j = 0;j < n;j++){
//             lin[i][j] = ' ';
//         }
//     }
//     //构建上半部分
//     for(i = 0;i <= mid;i++){
//         int starCount = 2 * i + 1;//计算每行*的数量
//         int starPos = mid - i;//计算每行*开始的列位置
//         for(j = 0;j < starCount;j++){
//             lin[i][starPos + j] = '*';
//          }
//     }
//     //倒转就可以了
//     //构建下半部分
//      for(i = mid + 1;i <= n - 1;i++){
//         int starCount = 2 * (n - 1 - i) + 1;
//         int starPos = mid - (n - 1 - i);//这里可以用万能公式mid - (i - mid)
//         for(j = 0;j < starCount;j++){
//             lin[i][starPos + j] = '*';
//          }
//     }

//     //输出二维数组
//     for(i = 0;i < n;i++){
//         for(j = 0;j < n;j++){
//             printf("%c",lin[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//计算浮点数相除的余
// int main() {
// 	double a, b;
// 	scanf("%lf %lf", &a, &b);
// 	int k;
// 	k = a / b;
// 	double r;
// 	r = a - k * b;
// 	printf("%lf", r);
// 	return 0;
// }

//计算球的体积
// #define PI 3.14
// int main() {
// 	int r;
// 	scanf("%d", &r);
// 	double V;
// 	V = 4.0 / 3.0 * PI * r * r * r;//4/3是1，改成4.0/3.0
// 	if (r >= 1 && r <= 100) {
// 		printf("%.5lf", V);
// 	}
// 	return 0;
// }

//反向输出三位数 //输入100输出001
int main(){
    int num1,reverse = 0;
    scanf("%d",&num1);
    while(num1 > 0){//数学方法反向：取余+整除
        reverse = reverse * 10 + num1 % 10;
        num /= 10;
    }
    printf("%d",reverse);
    return 0;
}