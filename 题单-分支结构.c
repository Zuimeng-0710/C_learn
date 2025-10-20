#include <stdio.h>

int main(){
    // printf("I love Luoogu!");
    // int A,B;
    // scanf("%d %d",&A,&B);
    apple_num1();
    printf("%d %d %d",num,sum,apple_count);
    return 0;
}
int apple_num1{
    int apple_num = 14;
    int num = apple_num / 4;
    int sum = 4 * num;
    int apple_count = apple_num % 4;
    return num,sum,apple_count;
}
int apple_count;
