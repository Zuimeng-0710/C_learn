//输入一组数字，统计出现次数最多的,并显示次数
#include <stdio.h>

int main(){
    int Maxcount = 0;
    int count[1000] = {0};
    int Maxnum;
    int num;//来存储输入数字

    while(1){
        scanf("%d",&num);
        if(num == -1){
            break;
        }
        count[num]++
        if(count[num] > Maxcount){
            Maxcount = count[num];
            Maxnum = num;
        }
    }
    printf("出现最多的数字是%d，出现次数为%d",Maxcount,Maxnum);

    return 0;
}