#include <stdio.h>

long ReFileSize(FILE *fp);

int main()
{
    long size;

    FILE *fp1=fopen("num4.txt","wt");
    fputs("0123456789",fp1);
    fclose(fp1);

    FILE *fp2=fopen("num4.txt","rt");
    size=ReFileSize(fp2);
    printf("%ld",size);
    fclose(fp2);
}

long ReFileSize(FILE *fp)
{
    long pos;
    fseek(fp,0,SEEK_END);
    pos=ftell(fp);
    rewind(fp);
    return pos;
}