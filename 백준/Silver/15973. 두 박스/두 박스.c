#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,x1,y1,p,q,p1,q1;
    scanf("%d %d %d %d",&x,&y,&x1,&y1);
    scanf("%d %d %d %d",&p,&q,&p1,&q1);
    if(x1<p || p1<x || q1<y || q>y1) printf("NULL");
    else if(x1==p&&y==q1 || x1==p&&y1==q || x==p1&&y1==q || x==p1&&y==q1) printf("POINT");
    else if(x1==p || x==p1 || y==q1 || y1==q) printf("LINE");
    else printf("FACE");
    return 0;
}
