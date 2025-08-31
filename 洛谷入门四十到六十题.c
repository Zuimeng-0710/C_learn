#include <stdio.h>

//收集瓶盖赢大奖
int main(){
    long long int lucky,encouragement;
    scanf("%lld %lld",&lucky,&encouragement);
    if(lucky == 10 || encouragement == 20){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}

//判断一个数是否可以被3和5整除
int main(){
    long long int num;
    scanf("%lld",&num);
    if(num % 3 == 0 && num % 5 == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

//判断能否被3，5，7整除
int mian(){
    int num;
    scanf("%d",&num);
    if(num % 3 == 0 && num % 5 == 0 && num % 7 == 0){
        printf("3 5 7");
    }
    else if(num % 3 == 0 && num % 5 == 0){
        printf("3 5");
    }
    else if(num % 5 == 0 && num % 7 == 0){
        printf("5 7");
    }    
    else if(num % 3 == 0 && num % 7 == 0){
        printf("3 7");
    }
    else if(num % 3 == 0){
        printf("3");
    }
    else if(num % 5 == 0){
        printf("5");
    }
    else if(num % 7 == 0){
        printf("7");
    }
    else{
        printf("n");
    }
    return 0;
}

//有一门不及格的学生
int main(){
    int Chinese_score,Math_score,English_score;
    scanf("%d %d %d",&Chinese_score,&Math_score,&English_score);
    if(Chinese_score < 60 || Math_score < 60 || English_score < 60){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}

int main(){
    char date;
    switch(date){
        case '1':pri




    }




    return 0;
}