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
    printf("�̸�: "); scanf("%s",emp.name);
    printf("�ֹι�ȣ: "); scanf("%s",emp.number);
    printf("�޿�: "); scanf("%d",&emp.don);

    printf("�̸�: %s\n",emp.name);
    printf("�ֹι�ȣ: %s\n",emp.number);
    printf("�޿�: %d",emp.don);
    return 0;
    
}
