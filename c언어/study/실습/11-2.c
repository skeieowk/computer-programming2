#include <stdio.h>

int main()
{
    FILE *fp=fopen("mystory.txt","rt");
    char buffer[100];
    if(fp==NULL)
    {
        puts("파일 오픈 실패");
        return -1;
    }
    while(fgets(buffer,sizeof(buffer),fp)!=NULL)
    printf(buffer);
    fclose(fp);
    return 0;
}