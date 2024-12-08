 #include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    getline(cin,str);

    int len;
    int cnt=1;
    len = str.length();
    for(int i=0; i<len; i++)
    {
        if(str[i]==' ')
            cnt++;
    }
    if(str[0]==' ') cnt--;
    if(str[len-1]==' ') cnt--;
    printf("%d",cnt);

    return 0;
}
