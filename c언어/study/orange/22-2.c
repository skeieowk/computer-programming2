#include <stdio.h>

struct employee
{
    char name[20];
    char number[20];
    int don;
};
int main()
{
    struct employee arr[3];
    for(int i=0;i<3;i++)
    {
        printf("�̸�: ");
        scanf("%s",arr[i].name);
        printf("�ֹι�ȣ: ");
        scanf("%s",arr[i].number);
        printf("�޿�: ");
        scanf("%d",&arr[i].don);
    }

    for(int i=0;i<3;i++)
    {
        printf("�̸�: %s\n",arr[i].name);
        printf("�ֹι�ȣ: %s\n",arr[i].number);
        printf("�޿�: %d\n",arr[i].don);
        
    }
    return 0;
    
}