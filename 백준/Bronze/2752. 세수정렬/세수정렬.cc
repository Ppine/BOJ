#include<bits/stdc++.h>

int main()
{
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    int temp;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d %d %d",a[0],a[1],a[2]);
    return 0;
}
