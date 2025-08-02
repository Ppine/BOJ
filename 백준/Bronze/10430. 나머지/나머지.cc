#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A,B,C;
    int a[4];
    scanf("%d %d %d",&A,&B,&C);
    a[0]=(A+B)%C;
    a[1]=((A%C) + (B%C))%C;
    a[2]=(A*B)%C;
    a[3]=((A%C) * (B%C))%C;
    for(int i=0; i<4; i++) printf("%d \n",a[i]);
    return 0;
}
