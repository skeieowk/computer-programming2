#include <stdio.h>

struct employee
{
    char name[20];
    char number[20];
    int don;
};
int main()
{
    struct employee emp;
    printf("이름: "); scanf("%s",emp.name);
    printf("주민번호: "); scanf("%s",emp.number);
    printf("급여: "); scanf("%d",&emp.don);

    printf("이름: %s\n",emp.name);
    printf("주민번호: %s\n",emp.number);
    printf("급여: %d",emp.don);
    return 0;
    
}
