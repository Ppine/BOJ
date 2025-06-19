#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int score[10]={11,9,9,9,8,8,8,8,8,8};
    if(n>=5&& n<=9)
    {
        printf("%d\nA C E F G H L M",score[n-1]);
    }
    else if(n==1) printf("11\nA B C D E F G H J L M");
    else if(n==2 || n==3) printf("9\nA C E F G H I L M");
    else if (n==4) printf("9\nA B C E F G H L M");
    else printf("8\nA B C F G H L M");

    return 0;
}
