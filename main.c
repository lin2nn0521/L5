#include <stdio.h>
#include <stdlib.h>

struct student
{
    char *student_name;
    char *student_ID;
    char *student_age;
} ;
int main()
{
    printf("�m�W\t�Ǹ�\t�~��\n");
    struct student one={"�i�T","08101","17"};
    struct student two={"����" ,"08301","17"};
    struct student three={"���|","08103","16"};
    struct student four={"�p��","08201","16"};
    printf("%s\t%s\t%s\n",one.student_name,one.student_ID,one.student_age);
    printf("%s\t%s\t%s\n",two.student_name,two.student_ID,two.student_age);
    printf("%s\t%s\t%s\n",three.student_name,three.student_ID,three.student_age);
    printf("%s\t%s\t%s\n",four.student_name,four.student_ID,four.student_age);
    return 0;
}
