#include <bits/stdc++.h>

using namespace std;


int main()
{
    char a[45];
    int data[45]={0},result[45]={0},i,len;

    scanf("%s",a);
    len=strlen(a);
    for(i=0; i<len; i++) data[i+1]=a[i]-48;

    if((data[2]==0 && data[1]*10+data[2]>34)||data[1]==0)
    {
        printf("0");
        return 0;
    }

    result[0]=result[1]=1;

    for(i=2; i<=len; i++)
    {
        if(data[i]==0) { result[i-1]=result[i]=result[i+1]=result[i-2]; i++; }
        else if(data[i-1]*10+data[i]<=34) result[i]=result[i-1]+result[i-2];
        else result[i]=result[i-1];
    }

    printf("%d",result[len]);

    return 0;
}
