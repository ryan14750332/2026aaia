/// week14-4a.cpp 二合一 找最大公因數 (暴力迴圈法)
#include <stdio.h>
int main()
{
    printf("請輸入2個整數(ex. 57 76): ");
    int a,b;
    scanf("%d%d",&a, &b);
    int s = 1;
    for (int k=1 ; k<=a; k++){  /// 逐一測試整數
        if(a%k==0 && b%k==0) s=k; ///整除,公因數
    }
    printf("最大公因數是:%d\n", s );
    printf("%d / %d 約分變 %d / %d\n", a, b, a/s, b/s);
}
