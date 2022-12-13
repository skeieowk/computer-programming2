#include <stdio.h>

int main()
{
    FILE *fp=fopen("mystory.txt","wt");
    char name[20],regnum[20],phonenum[20],food[20],hobby[20];
    printf("이름: "); scanf("%s",name);
    printf("주민등록번호: "); scanf("%s",regnum);
    printf("전화번호: "); scanf("%s",phonenum);
    printf("즐겨먹는 음식: "); scanf("%s",food);
    printf("취미: "); scanf("%s",hobby);
    fprintf(fp,"#이름: %s\n#주민등록번호: %s\n전화번호: %s\n",name,regnum,phonenum);
    fprintf(fp,"#즐겨먹는 음식: %s\n#취미: %s\n",food,hobby);
    return 0;
}