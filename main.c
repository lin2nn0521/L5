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
    printf("�п�J�Ĥ@�Ӽ�: \n");
    scanf("%d",&a);
    printf("�п�J�ĤG�Ӽ�: \n");
    scanf("%d",&b);
    printf("�̤j���]�Ƭ�: %d\n",common_factor(a,b));
    system("PAUSE");
    return 0;
}

