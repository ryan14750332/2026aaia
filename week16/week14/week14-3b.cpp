// week14-3b.cpp SOIT106_ADVANCE_009_C
#include <stdio.h>
int main()
{
int N;
scanf("%d", &N);
int s=0;
int N2=N;
while ( N>0 ) {
s=s*10+N%10;
N = N / 10;
}
printf("%d\n", s);
}
