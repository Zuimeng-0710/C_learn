
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

//鸡尾酒疗法
int main(){
    int n;
    double sum_clinical_1,valid_clinical_1;//鸡尾酒疗法
    double sum_clinical_2,valid_clinical_2;//改进疗法
    double sum,sum1;
    scanf("%d",&n);
    scanf("%lf %lf",&sum_clinical_1,&valid_clinical_1);
    sum = valid_clinical_1 / sum_clinical_1;
    for(int i = 0;i < n;i++){
        scanf("%d %d",&sum_clinical_2,&valid_clinical_2);
        sum1 = valid_clinical_2 / sum_clinical_2;
    }
    if(sum1 - sum > 0.05){
            printf("better");
        }
    else if(sum - sum1 > 0.05){
        printf("worse");
        }
    else{
        printf("same");
    }
    return 0;

//救援
#include <math.h>
int main() {
	int n;//屋顶
	scanf("%d", &n);
	double x, y; //坐标位置
	int count;//人数
	for (int i = 0; i < n; i++) {

		scanf("%lf %lf %d", &x, &y, &count);
	}
	double sum = 0;
	double line_long = sqrt(x * x + y * y);
	sum = 0.5 * count + 1.0 * count + line_long / 50 * 2.0;
	printf("%.0lf", sum);
	return 0;
}

//药房管理
int main(){
    int m;//药品总量
    scanf("%d",&m);
    int n;//取药人数
    scanf("%d",&n);
    int t;//取走的药品
    int ans;//无法取药的人
    while(n--){
        scanf("%d",&t);
        m >= t ? m -= t : ans++;
    }
    printf("%d",ans);
    return 0;
}

//统计满足条件的四位数
int main() {
	int n;
	int four_number;
	int ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &four_number);
		int ones, tens, hundreds, thousands;
		//个位
		ones = four_number % 10;
		//十位
		tens = four_number % 100 / 10;
		//百位
		hundreds = four_number / 100 % 10;
		//千位
		thousands = four_number / 1000;
		if (ones - tens - hundreds - thousands > 0) {
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}

//求分数序列和
int main(){
    int p = 1,q = 2;//q1,p1
    double sum;
    sum = q / p * 1.0;
    int n;
    scanf("%d",&n);
    for(int i = 1;i < n;i++){
        q = q + p;
        p = q;
        int temp = q / p;
        sum += temp;
    }
    printf("%.4lf",sum);
    return 0;
}

//计算分数加减表达式的值
int main(){
    int n;
    scanf("&d",&n);
    for(int i = 0;i < n;i++){
        if(n % 2 == 0){
            

        }
        if(n % 2 == 1){


        }
    }


    return 0;
}