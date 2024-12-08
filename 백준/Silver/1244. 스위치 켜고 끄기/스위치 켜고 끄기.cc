#include <stdio.h>

using namespace std;

int main()
{
    int sn,n,i,j,k=0,cnt;// sn= 스위치개수 n=학생수 cnt=마지막줄바꿈
    int sw[105]={0},s[105]={0},num[105]={0};//sw=스위치배열 s=학생의성별 num=받은수
    scanf("%d",&sn);
    for(i=1; i<=sn; i++) scanf("%d",&sw[i]);
    scanf("%d",&n);
    for(i=1; i<=n; i++) scanf("%d %d",&s[i],&num[i]);
    for(i=1; i<=n; i++)
    {
        k=0;
        for(j=1; j<=sn; j++)
        {
            if(s[i]==1)//남자일때
            {
                if(j%num[i]==0)//배수인지확인
                {
                    sw[j]=1-sw[j];
                }
            }
            else if(s[i]==2)//여자일때
            {
                while(sw[num[i]+k]==sw[num[i]-k] && num[i]-k>=1 && num[i]+k<=sn)
                {
                    sw[num[i]-k]=1-sw[num[i]-k];
                    sw[num[i]+k]=sw[num[i]-k];
                    k++;
                }
            }
        }
    }
    for(i=1; i<=sn; i++)
    {
        printf("%d ",sw[i]);
        if(i%20==0)
        {
            printf("\n");
        }
    }

    return 0;
}
