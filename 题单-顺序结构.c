/*
伦敦奥运会要到了，小鱼在拼命练习游泳准备参加游泳比赛，可怜的小鱼并不知道鱼类是不能参加人类的奥运会的。
这一天，小鱼给自己的游泳时间做了精确的计时
（本题中的计时都按 24 小时制计算），它发现自己从 a 时 b 分一直游泳到当天的 c 时 d 分，请你帮小鱼计算一下，它这天一共游了多少时间呢？
小鱼游的好辛苦呀，你可不要算错了哦。
*/
int main(){
    int a,b,c,d;//表示时间
    scanf("%d %d %d %d",&a,&b,&c,&d);//输入时间
    int e,f;//输出时间
    //1小时等于60分钟
    //所以就要满60进1
    int temp;//临时变量存储小时
    temp = c - a;
    if(b > d){
        e = c - a - 1;//表示时
        f = 60 + d - b;//表示分
        printf("%d %d",e,f);
    }
    else{
        e = c - a;
        f = d - b;
        if(f > 0 && f < 60){
            printf("%d %d",e,f);
        }
    }
    return 0;
}

/*
班主任给小玉一个任务，到文具店里买尽量多的签字笔。
已知一只签字笔的价格是 1 元 9 角，
而班主任给小玉的钱是 a 元 b 角，小玉想知道，她最多能买多少只签字笔呢。
*/

int main(){
    int i = 19;//表示签字笔的价格,单位角
    int a,b;
    scanf("%d %d",&a,&b);
    int temp = a * 10 + b;
    int sum = temp / i;
    printf("%d",&sum);
    return 0;
}

//超级玛丽是一个非常经典的游戏。请你用字符画的形式输出超级玛丽中的一个场景：

int main() {
    printf(
    "                ********\n"
    "               ************\n"
    "               ####....#.\n"
    "             #..###.....##....\n"
    "             ###.......######              ###            ###\n"
    "                ...........               #...#          #...#\n"
    "               ##*#######                 #.#.#          #.#.#\n"
    "            ####*******######             #.#.#          #.#.#\n"
    "           ...#***.****.*###....          #...#          #...#\n"
    "           ....**********##.....           ###            ###\n"
    "           ....****    *****....\n"
    "             ####        ####\n"
    "           ######        ######\n"
    "##############################################################\n"
    "#...#......#.##...#......#.##...#......#.##------------------#\n"
    "###########################################------------------#\n"
    "#..#....#....##..#....#....##..#....#....#####################\n"
    "##########################################    #----------#\n"
    "#.....#......##.....#......##.....#......#    #----------#\n"
    "##########################################    #----------#\n"
    "#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n"
    "##########################################    ############\n"
    );
    return 0;
}

//现在需要采购一些苹果，每名同学都可以分到固定数量的苹果，
// 并且已经知道了同学的数量，请问需要采购多少个苹果
int main(){
    int num,count;
    scanf("%d %d",&num,&count);
    int sum = num * count;
    printf("%d",sum);
    return 0;
}

//输入一个小写字母，输出其对应的大写字母。例如输入 q[回车] 时，会输出 Q
int main(){
    char num1;
    scanf("%c",&num1);
    char num2 = num1 + 32;
    printf("%c",num2);
    return 0;
}

//浮点数运算
int main() {
	double num;
	//一位小数可以转换成4位数
	scanf("%lf", &num);
	if (num > 100 && num < 1000) {
		int num1 = (int)(num * 10);//把double换成int再进行计算
		int thousands = num1 / 1000;//千位
		int hundreds = num1 % 1000 / 100 ;//百位
		int tens = num1 % 100 / 10;//十位
		int ones = num1 % 10;//个位
		printf("%d.%d%d%d", ones, tens, hundreds, thousands);
	}
	return 0 ;
}


//三角形面积
#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, p, S;
	scanf("%lf %lf %lf", &a, &b, &c);
	p = 1 / 2.0 * (a + b + c);
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1lf", S);
	return 0;
}

//再分肥宅水
int  main() {
	double t;
	int n;
	scanf("%lf %d", &t, &n);
	printf("%.3lf\n", t / (2 * n) * 2);
	printf("%d", 2 * n);
	return 0;
}

//A+B problem
int main(){
    int  num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",num1 + num2);
    return 0;
}

//上学迟到
#include <cstdio>
int main()
{
	int S,V;//家到学校的距离 //行走的速度 
	scanf("%d%d",&S,&V);
	int t;
	if(S%V==0)//因为后面是从07：59开始的,所以这里的时间少一分钟 
	{
		t=S/V;
		t+=9;//垃圾分类的时间 
	}
	else
	{
		t=S/V;//时间如果不能被速度整除,就要提前一分钟出发 
		t+=10;//垃圾分类的时间 
	}
	int H,M;//保存出发的小时,分钟 
	H=7;
	M=59;
	while(t!=0) 
	{
		if(M!=0)
		{
			M--;
		}
		else
		{
			if(H!=0)
			{
				H--;
				M=59;
			}
			else
			{
				H=23;
				M=59;//时间重置
			}
		}
		t--;
	}
	int h1,h2;//分开保存小时，分钟的十位，个位 
	int m1,m2;
	h1=H/10;
	h2=H-(10*(H/10)); 
	m1=M/10;
	m2=M-(10*(M/10)); 
	printf("%d%d:%d%d",h1,h2,m1,m2);
}

//NOIP 2017普及组 成绩
int main(){
	double sum_score = 0;
	int homework_score,test_score,exam_score;
	scanf("%d %d %d",&homework_score,&test_score,&exam_score);
	sum_score = homework_score * 0.2 + test_score * 0.3 + exam_score * 0.5;
	printf("%lf",sum_score);
	return 0;
}

//sequentialStructures