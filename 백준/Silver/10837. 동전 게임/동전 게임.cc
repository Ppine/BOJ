#include <stdio.h>
using namespace std;

int main()
{
    int k,c,i,a,b,aa,bb,ax,bx,imsi,pos;

    scanf("%d %d",&k,&c);

    for(i=0; i<c; i++)
    {
        scanf("%d %d",&a,&b);
        imsi=k;
        aa=bb=pos=0; ax=bx=k;

        if(aa==a&&bb==b)
        {
            printf("%d\n",1);
            continue;
        }

        while(imsi--)
        {
            if(aa<a) aa++;
            ax--;

            if(aa==a && bb==b)
            {
                pos=1; break;
            }

            if(aa>bb+bx || bb>aa+ax)
            {
                pos=0; break;
            }

            if(bb<b) bb++;
            bx--;

            if(aa==a && bb==b)
            {
                pos=1; break;
            }

            if(bb>aa+ax || aa>bb+bx)
            {
                pos=0; break;
            }
        }
        printf("%d\n",pos);
    }

    return 0;
}
