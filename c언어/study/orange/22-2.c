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
        printf("이름: ");
        scanf("%s",arr[i].name);
        printf("주민번호: ");
        scanf("%s",arr[i].number);
        printf("급여: ");
        scanf("%d",&arr[i].don);
    }

    for(int i=0;i<3;i++)
    {
        printf("이름: %s\n",arr[i].name);
        printf("주민번호: %s\n",arr[i].number);
        printf("급여: %d\n",arr[i].don);
        
    }
    return 0;
    
}