#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct rectangle
{
    Point ul;
    Point dr;
} Rectangle;

void ShowRecArea(Rectangle rec)
{
    printf("����: %d\n",(rec.dr.xpos-rec.ul.xpos)*(rec.dr.ypos,rec.ul.ypos));
}

void ShowRecPos(Rectangle rec)
{
    printf("�� ���: [%d, %d]\n",rec.ul.xpos,rec.ul.ypos);
    printf("�� �ϴ�: [%d, %d]\n",rec.ul.xpos,rec.dr.ypos);
    printf("�� ���: [%d, %d]\n",rec.dr.xpos,rec.ul.ypos);
    printf("�� �ϴ�: [%d, %d]\n",rec.dr.xpos,rec.dr.ypos);

}

int main(void)
{
    Rectangle rec1={{1,1},{4,4}};
    Rectangle rec2={{0,0},{7,5}};
    ShowRecArea(rec1);
    ShowRecPos(rec1);
    ShowRecArea(rec2);
    ShowRecPos(rec2);
    return 0;
}

