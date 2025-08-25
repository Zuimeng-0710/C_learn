#include <stdio.h>

int main(){
    
    int i,j;
    int a[10][10];
    for(i = 0;i < 10;i++){
        a[i][0] = 1;
        a[i][i] = 1; //让对角线和第一列的数字为1
    }
    fo(i = 2;i <= 10;i++){
        for(j = 1;j < i;j++){   //注意这里的起始点j = 1 所以 j < i 不可以等于0，没有数组下标等于-1的
            a[i][j] = a[i-1][j-1] + a[i - 1][j];
        }

    }
    for(i = 0;i < 10;i++){
        for(j = 0;j <= i;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}i
