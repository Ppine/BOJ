#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[1000000];

    scanf("%s",a);
    int len = strlen(a);
    for(int i=0; i<len; i++)
        if(a[i]<97) 
            a[i]+=32;//change to small alphabet
    int count[30]={0};//make cell for all alphabet
    int max=0;
    int check=0;
    char ans;
    for(int i=0; i<len; i++)
    {
        count[a[i]-97]++;//count alphabet
        if(count[a[i]-97]>max)//get max
        {
            max=count[a[i]-97];
            ans=a[i]-32;
        }
    }
    for(int i=0; i<27; i++)
    {
        if(max==count[i])
        {
            check++;
            //printf("test = %c\n",a[i]);
            //printf("check plus\n");
        }
    }
    if(check!=1)
    {
        //printf("max = %d",max);
        printf("?");
        return 0;
    }
    else 
    {
        //printf("max=%d\n",max);
        printf("%c",ans);
    }

    return 0;
}
