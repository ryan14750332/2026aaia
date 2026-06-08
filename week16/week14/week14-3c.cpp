// week14-3c.cpp SOIT106_ADVANCE_009_C
#include <stdio.h>
int f (int N)
{
int s = 0;
while ( N>0 ){
s=s*10+N%10;
N = N /10;
}
return s;
}
int main()
{
int N;
scanf("%d", &N);

printf("%d\n", f(N) );
}
