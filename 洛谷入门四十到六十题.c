#include <stdio.h>

//收集瓶盖赢大奖
// int main(){
//     long long int lucky,encouragement;
//     scanf("%lld %lld",&lucky,&encouragement);
//     if(lucky >= 10 || encouragement >= 20){
//         printf("1");
//     }
//     else{
//         printf("0");
//     }
//     return 0;
// }

//判断一个数是否可以被3和5整除
// int main(){
//     long long int num;
//     scanf("%lld",&num);
//     if(num % 3 == 0 && num % 5 == 0){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }

//判断能否被3，5，7整除
// int mian(){
//     int num;
//     scanf("%d",&num);
//     if(num % 3 == 0 && num % 5 == 0 && num % 7 == 0){
//         printf("3 5 7");
//     }
//     else if(num % 3 == 0 && num % 5 == 0){
//         printf("3 5");
//     }
//     else if(num % 5 == 0 && num % 7 == 0){
//         printf("5 7");
//     }    
//     else if(num % 3 == 0 && num % 7 == 0){
//         printf("3 7");
//     }
//     else if(num % 3 == 0){
//         printf("3");
//     }
//     else if(num % 5 == 0){
//         printf("5");
//     }
//     else if(num % 7 == 0){
//         printf("7");
//     }
//     else{
//         printf("n");
//     }
//     return 0;
// }

//有一门不及格的学生
// int main(){
//     int Chinese_score,Math_score,English_score;
//     scanf("%d %d %d",&Chinese_score,&Math_score,&English_score);
//     if(Chinese_score < 60 && Math_score >= 60 && English_score >= 60) {
//         printf("1");
//     }
//     else if(Chinese_score >= 60 && Math_score < 60 && English_score >= 60){
//         printf("1");
//     }
//     else if(Chinese_score >= 60 && Math_score >= 60 && English_score < 60){
//         printf("1");
//     }
//     else{
//         printf("0");
//     }
//     return 0;
// }

//晶晶赴约会
// int main() {
// 	char date;
// 	scanf("%c", &date);
// 	switch (date) {
// 		case '1':
// 			printf("NO");
// 			break;
// 		case '2':
// 			printf("YES");
// 			break;
// 		case '3':
// 			printf("NO");
// 			break;
// 		case '4':
// 			printf("YES");
// 			break;
// 		case '5':
// 			printf("NO");
// 			break;
// 		case '6':
// 			printf("YES");
// 			break;
// 		case '7':
// 			printf("YES");
// 			break;
// 	}
// 	return 0;
// }

//骑车与走路
// int main(){
//     int distance;
//     scanf("%d",&distance);
//     int time1 = (27 + 23) + distance / 3.0;//自行车时间
//     int time2 = distance / 1.2;//步行时间
//     if(time1 == time2){
//         printf("All");
//     }
//     else if(time1 < time2){
//         printf("Bike");
//     }
//     else{
//         printf("Walk");
//     }
//     return 0;
// }

//分段函数
// float z_f(float num);
// float f_t(float num);
// float t_t(float num);
// //声明函数

// int main() {
// 	float x;
// 	float result;
// 	scanf("%f", &x);
// 	if (x >= 0 && x < 5) {
// 		result = z_f(x);//局部变量调用函数
// 		printf("%.3f", result);
// 	}
// 	if (x >= 5 && x < 10) {
// 		result = f_t(x);//局部变量调用函数
// 		printf("%.3f", result);
// 	}
// 	if (x >= 10 && x < 20) {
// 		result = t_t(x);//局部变量调用函数
// 		printf("%.3f", result);
// 	}
// 	return 0;
// }

// float z_f(float num) {//与声明函数一致
// 	float y;
// 	y = -num + 2.5;
// 	return y;
// }

// float f_t(float num) {//与声明函数一致
// 	float y;
// 	y  = 2 - 1.5 * (num - 3) * (num - 3);
// 	return y;
// }

// float t_t(float num) {//与声明函数一致
// 	float y;
// 	y = num / 2 - 1.5;
// 	return y;
// }

//计算邮资
int Situation1(int num,char num1);
int Situation2(int num,char num1);
int Situation3(int num,char num1);
int Situation4(int num,char num1);
//声明函数
int main()
{
    int Weight;
    char Litter;
    int total_amount;
    scanf("%d %c",&Weight,&Litter);
    if(Weight < 1000 && Litter == 'n'){
        total_amount = Situation1(Weight,Litter);
    }
    else if(Weight < 1000 && Litter == 'y'){
        total_amount = Situation2(Weight,Litter);
    }
    else if(Weight > 1000 && Litter == 'n'){
        total_amount = Situation3(Weight,Litter);
    }
    else if(Weight > 1000 && Litter == 'y'){
        total_amount = Situation4(Weight,Litter);
    }
    printf("%d",total_amount);

}
int Situation1(int num,char num1){//情况1---重量在1000克以内---不加急
    int amount = 8;
    return amount;
}
int Situation2(int num,char num1){//情况2---重量在1000克以内---加急
    int amount = 8 + 5;
    return amount;
}
int Situation3(int num,char num1){//情况3---重量超过1000克---不加急
    int amount;
    double temp = (num - 1000) / 500.0;//浮点数
    int temp1 = (num - 1000) / 500;//整数
    double temp2 = temp - temp1;//浮点数
    if(temp2 < 1){
        amount = 8 + temp1 * 4 + 4;
    }
    return amount;
}
int Situation4(int num,char num1){//情况4---重量超过1000克---加急
    int amount;
    double temp = (num - 1000) / 500.0;//浮点数
    int temp1 = (num - 1000) / 500;//整数
    double temp2 = temp - temp1;//浮点数
    if(temp2 < 1){
        amount = 8 + temp1 * 4 + 4 + 4;
    }
    return amount;
}