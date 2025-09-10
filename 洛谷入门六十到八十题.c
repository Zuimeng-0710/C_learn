
//整数的个数
int mian(){
    int k;
    int num;
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    scanf("%d",&k);
    for(int i = 0;i < k;i++){
        scanf("%d",&num);
        if(num = 1){
            sum += num;
        }
        else if(num = 5){
            sum1 += num;
        }
        else if(num = 10){
            sum2 += num;
        }
    }
    printf("%d\n",&sum);
    printf("%d\n",&sum1);
    printf("%d\n",&sum2);
    return 0;
}

//乘方计算
#include <math.h>
int main(){
    int a,n;// 输入底数和幂
    scanf("%d %d",&a,&n);
    int pow(int a,int n);
    printf("%d",pow);
    return 0;
}

//人口增长问题
int main(){
    int x,n;
    double sum = 0;
    scanf("%d %d",&x,&n);
    sum = x;
    for(int i = 0;i < n;i++){
        sum = sum + sum * 0.001;
    }
    printf("%.4lf",sum);
    return 0;
}

//斐波那契数列
int main(){ 
    int n;//
    scanf("%d",&n);
    long long int f[40];
    f[1] = 1;
    f[2] = 1;
    for(int i = 3;i < n;i++){
        f[i] = f[i - 1] + f[i - 2];
        int n;
        scanf("%d",&n);    
        while(n--){
            scanf("%d",&a);
            printf("%lld\n",f[a]);
        }
    }
    return 0;
}