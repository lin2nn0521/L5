#include <stdio.h>
#include <stdlib.h>

int common_factor (int first, int second)
{
    int r;
    r = first % second;
    if(r==0)
            return second;
    return common_factor(second,r);
}
int main()
{
    int a,b;
    printf("請輸入第一個數: \n");
    scanf("%d",&a);
    printf("請輸入第二個數: \n");
    scanf("%d",&b);
    printf("最大公因數為: %d\n",common_factor(a,b));
    system("PAUSE");
    return 0;
}

