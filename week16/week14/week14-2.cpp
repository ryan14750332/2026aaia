/// week14-2.cpp
#include <stdio.h>

int f1(int x, int y)
{
    printf("f1() 函式吃到參數 x:%d y:%d\n", x, y);
    x = x + 10;///再函式裡,10
    printf("f1() 函式裡修改後 x:%d y:%d\n", x, y);
}

int main() /// 定義 main () 函式
{
    printf("Hello World\n");///函式的呼叫
    int x = 100, y = 200;
    printf("main() 函式裡，原本 x:%d y:%d\n", x, y);
    f1(x, y);/// 呼叫f1()函式，裡面動的，跟外面的關係歐!
    printf("main() 函式裡，現在 x:%d y:%d\n", x, y);
    return 0; ///以前都沒有寫，但是應該要寫。 main() 會幫你加
}
