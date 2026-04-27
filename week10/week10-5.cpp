// week10-5.cpp 泡泡排序法 完整版
// 修改自week10-3.cpp 泡泡排序法
#include <stdio.h>
int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};

    for (int i=0; i<10; i++) {
        printf("%d ", a[i] );
    }
    printf("\n");

    for (int k=0; k<20; k++) {
        for (int i=0; i<10-1; i++) {
            if (a[i] < a[i+1]) {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
        }
    }
        for (int i=0; i<10; i++) {
            printf("%d ", a[i] );
    }
        printf("\n");
  }
}
