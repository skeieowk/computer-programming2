#include <stdio.h>

int main()
{
    FILE *fp=fopen("mystory.txt","wt");
    char name[20],regnum[20],phonenum[20],food[20],hobby[20];
    printf("�̸�: "); scanf("%s",name);
    printf("�ֹε�Ϲ�ȣ: "); scanf("%s",regnum);
    printf("��ȭ��ȣ: "); scanf("%s",phonenum);
    printf("��ܸԴ� ����: "); scanf("%s",food);
    printf("���: "); scanf("%s",hobby);
    fprintf(fp,"#�̸�: %s\n#�ֹε�Ϲ�ȣ: %s\n��ȭ��ȣ: %s\n",name,regnum,phonenum);
    fprintf(fp,"#��ܸԴ� ����: %s\n#���: %s\n",food,hobby);
    return 0;
}