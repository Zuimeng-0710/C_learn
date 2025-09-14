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
int Situation1(long long int num,char num1);
int Situation2(long long int num,char num1);
int Situation3(long long int num,char num1);
int Situation4(long long int num,char num1);
//声明函数
int main()
{
    long long int Weight;
    char Litter;
    long long int total_amount;
    scanf("%lld %c",&Weight,&Litter);
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
        amount = 8 + temp1 * 4 + 4 + 5;
    }
    return amount;
}

//最大数输出
// int main(){ 
//     long int num1,num2,num3;
//     scanf("%ld %ld %ld",&num1,&num2,&num3);
//     long int temp;//存储中间值
//     long int temp1;//存储第三值
//     temp = num2;
//     if(num1 > num3){
//         temp1 = num1;
//     } 
//     else{
//         temp1 = num3;
//     }
//     if(temp > temp1){
//         printf("%ld",temp);
//     }
//     else{
//         printf("%ld",temp1);
//     }
//     return 0;
// }

//三角形判断
// int main(){
//     int side1,side2,side3;
//     scanf("%d %d %d",&side1,&side2,&side3);
//     if((side1 + side2) > side3 && (side1 + side3) > side2 && (side2 + side3) > side1){
//         printf("1");
//     }
//     else{
//         printf("0");
//     }
//     return 0;
// }

// //点和正方形的关系
// int main(){
//     int x,y;
//     scanf("%d %d",&x,&y);
//     if(x >= -1 && x <= 1 && y >= -1 && y <= 1){
//         printf("yes");
//     }
//     else{
//         printf("no");
//     }
//     return 0;
// }

//简单计算器
// int add(int num1, int num2); //加法
// int minus(int num1, int num2); //减法
// int time(int num1, int num2); //乘法
// int divide(int num1, int num2); //除法

// //声明函数
// int main() {
// 	int num1, num2;
// 	char Character;
// 	int result;
// 	scanf("%d %d %c", &num1, &num2, &Character);
// 	switch (Character) {
// 		case'+':
// 			result =  add(num1, num2);
// 			printf("%d\n", result);
// 			break;
// 		case'-':
// 			result =  minus(num1, num2);
// 			printf("%d\n", result);
// 			break;
// 		case'*':
// 			result =  time(num1, num2);
// 			printf("%d\n", result);
// 			break;
// 		case'/':
// 			if (num2 == 0) {
// 				printf("Divided by zero!\n");//这里才开始判定
// 			} else {
// 				result =  divide(num1, num2);
// 				printf("%d\n", result);
// 			}
// 			break;
// 		default:
// 			printf("Invalid operator!\n");
// 			break;
// 	}
// }
// //函数负责把输入的数运算返回到主函数内
// int add(int num1, int num2) {
// 	int result = num1 + num2;
// 	return result;
// }

// int minus(int num1, int num2) {
// 	int result = num1 - num2;
// 	return result;
// }

// int time(int num1, int num2) {
// 	int result = num1 * num2;
// 	return result;
// }

// int divide(int num1, int num2) {
// 	int result = num1 / num2;
// 	return result;
}

//求一元二次方程
#include <math.h>
double root1(double a, double b, double c);
double root2(double a, double b, double c);

//声明函数
int main() {
	double a, b, c;
	double result1, result2;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0) {
		printf("No answer!");
		return 0;
	}
	double date = pow(b, 2) - 4 * a * c;
	if (date == 0) {
		result1 = root1(a, b, c);
		printf("x1=x2=%.5lf", result1);
	} else if (date < 0) {
		printf("No answer!");
	} else {
		result1 = root1(a, b, c);
		result2 = root2(a, b, c);
		if (result1 > result2) {
			printf("x1=%.5lf;x2=%.5lf", result2, result1);
		} else {
			printf("x1=%.5lf;x2=%.5lf", result1, result2);
		}
	}
	return 0;
}

double root1 (double a, double b, double date) {
	double x1 = (-b + sqrt(date)) / (2 * a);
	return x1;
}

double root2(double a, double b, double date) {
	double x2 = (-b - sqrt(date)) / (2 * a);
	return x2;
}

//求平均年龄
int main(){
    int num;
    int sum = 0;
    scanf("%d",&num);
    for(int i = 0;i < num;i++){
        int x;
        scanf("%d",&x);
        sum += x;
    }
    double avg = sum * 1.0 / num;
    printf("%.2lf",avg);
    return 0;
}

//均值
int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        double ai;
        scanf("%lf",&ai);
        sum += ai;
    }
    double avt = sum * 1.0 / n;
    printf("%.4lf",avt);
    return 0;
}

//求整数的和和均值
int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        int num;
        scanf("%d\n",&num);
        sum += num;
    }
    double avt = sum * / n;
    printf("%d %.5lf",sum,avt);
    return 0;
}

//最高的分数
int main(){
    int people_count;
    scanf("%d",&people_count);//输入学生人数
    //输入第一个学生成绩
    int max;
    scanf("%d",&max);
    for(int i = 1;i < people_count;i++){
        int score;
        scanf("%d",&score);
        if(max < score){
            max = score;
        }
    }
    printf("%d",score);
}

//奥运奖牌计数
int main(){
    int n;
    int Gold,Sliver,bronze;
    int sum = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d %d %d",&Gold,&Sliver,&bronze);
        sum = Gold + Sliver + bronze;
    }
    printf("%d",sum);
    return 0;
}

//奇数求和
int mian(){
    int num1,num2;
    int sum = 0;
    int temp = 0;
    scanf("%d %d",&num1,&num2);//7~15 7 9 11 13 15   7~17 7 9 11 13 15 17
    for(int i = 0;i < (num2 - num1) / 2 + 1;i++){
        if(num1 % 2 == 1){
            temp = num1 + 2;
        }
        else{
            temp = num1 + 1;
        }
        sum = num1 + num2 + temp;
        while(temp < num2 || temp = num2){
            temp += 2;
            sum += temp;
        }
    }
    printf("%d",sum);
    return 0;
}

//满足条件的数累加
int main(){
    int m,n;
    int sum = 0;
    scanf("%d %d",&m,&n);
    while(m < n){
        if(m % 17 == 0){
            sum += m;
        }
        else{
            m++;
        }
    }
    return 0;
}
