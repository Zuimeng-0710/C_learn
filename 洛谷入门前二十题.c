#include <stdio.h>
#include <math.h>
#include <stdbool.h>
入门第一题
int main({
    long long int num1,num2;
    scanf("lld",&num1,&num2);
    printf("%lld",num1+num2);

    return 0;
}

HelloWorld
int main({
    printf("Hello,World\n");
    return 0;
}

输出第二个整数
int main(){
    long long int num1,num2,num3;
    scanf("%lld ""%lld " "%lld ",num1,num2,num3);//因为中间需要空格所以一个变量之间＋空格和双引号
    printf("lld",num2);
    return 0;
}

对齐输出
int main(){
    long long int num1,num2,num3;
    scanf("lld lld lld",&num1,&num2,&num3);
    printf("%8lld" "%8lld" "%8lld",num1,num2,num3);//8lld是右对齐
    return 0;
}

字符三角形
int main(){
    char c1;
    scanf("%c",c1);
    printf("   %c \n",c1);
    printf(" %c%c%c \n",c1,c1,c1);
    printf("%c%c%c%c%c\n",c1,c1,c1,c1,c1);
    return 0;
}

地球人口承载力估计
int main(){
    int x,a,y,b;
    float z;
    scanf("%d %d %d %d",x,a,y,b);
    z = (a*x - b*y) / (a - b);
    printf("%.2f",z);
    return 0;
}

A+B
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    if(A + B < 0){
        printf("%d",A+B);
    }
    return 0;
}

计算(a+b)*c的值
int main(){
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    printf("%lld",(a+b)*c);

    return 0;
}

计算(a+b)/c的值
int main(){
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    printf("%lld",(a+b)/c);

    return 0;
}

带余除法
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a >= 0 && a <= 100 && b >= 1 && b <= 100){
        printf("%d %d\n",a/b,a%b);
    }
    return 0;
}

计算整数的分数浮点数
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    if(a >= 1 && b >= 1){
        printf("%.9lf",a/b);
    }
    return 0;
}

甲流疫情死亡率
int main(){
    int a,b;
    printf("%d",&a);
    printf("%d",&b);
    printf("%.3f%%",100.0 * b / a);

    return 0;
}

温度表达转化
int main(){
    double F,C;
    scanf("%lf",&F);
    if(F >= -459.67){
        printf("%.5lf",5*(F - 32)/9);
    }
    return 0;
}

与圆相关的运算
#define PI 3.14159
int main(){
    
    double r,d,c,s;
    scanf("%lf",&r);
    if(r >= 0 && r <= 10000){
        printf("%.4lf %.4lf %.4lf",2 * r,PI * 2 * r,PI * r * r);
    }

    return 0;
}

计算并联电阻的阻值
int main(){
    double r1,r2;
    scanf("%lf %lf",&r1,&r2);
    printf("%.2lf",1 / (1 / r1 + 1 / r2));
    return 0;
}

// 浮点数向零舍入      //80AC
// int main(){
//     double num1;
//     int result;
//     scanf("%lf",&num1);
//     if(num1 > 0){
//         result = (int)num1; 
//     }
//     else{
//         result = -(int)fabs(num1);
//     }
//     printf("%d\n",result);//(int)num1为数据类型强制转换
//     return 0;
// }

打印ASCLL码
int main(){
    char arr;
    scanf("%c",&arr);
    printf("%d",arr);

    return 0;
}

打印字符
int main(){
    int arr;
    scanf("%d",&arr);
    printf("%c",arr);
    return 0;
}


整形与布尔型的转换
int main(){
    int num1;//整形
    scanf("%d",&num1);
    bool boolnum1 = num1;//整形转布尔
    int result = boolnum1;//布尔转整形
    printf("%d\n",result);
    return 0;
}

分糖果
int main(){
    int candle[6];//candle[0]不用
    int eaten = 0;
    int i;
    for(i = 1;i <= 5;i++){
        scanf("%d",&candle[i]);
    }
    int temp[6];
    for(i = 1;i <= 5;i++){
        int num = candle[i];
        //计算吃的糖果数量
        eaten += num % 3;
        //计算每一份的数量
        int per = num / 3;
        //自己留一份
        temp[i] = per; //temp为临时变量
        candle[i] = temp[i];
        //分给左边的小朋友
        int left,right;
        if(i == 1){
            left = 5;
            right = 2;
        }
        else if(i == 5){
            left = 4;
            right = 1;
        }
        else{
            left = i - 1;
            right = i + 1;
        }
        candle[left] += per;
        candle[right] += per;
    }
    for(i = 1;i <= 5;i++){
        printf("%d",candle[i]);
    }
    printf("\n");
    printf("%d",eaten);
    return 0;
}