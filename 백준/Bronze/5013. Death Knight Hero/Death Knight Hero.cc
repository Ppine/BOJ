#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n,cnt=0;
    
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(int j=0; j<s.length(); j++){
            if((s[j]+1) == s[j+1])
            {
                cnt--;
                break;
            }
        }
        cnt++;
    }
    printf("%d",cnt);

    return 0;
}
