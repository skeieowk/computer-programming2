#include <stdio.h>

int main()
{
    FILE *fp=fopen("mystory.txt","rt");
    char buffer[100];
    if(fp==NULL)
    {
        puts("���� ���� ����");
        return -1;
    }
    while(fgets(buffer,sizeof(buffer),fp)!=NULL)
    printf(buffer);
    fclose(fp);
    return 0;
}