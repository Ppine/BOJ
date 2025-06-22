#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n,cnt=0;
    string min;

    scanf("%d",&n);
    vector<string> name(n);
    for(int i=0; i<n; i++){
        cin >> name[i];
        if(name[i].length()!=3){
            n--;
            name[i].clear();
            i--;
        }
    }
    min=name[0];
    for(int i=0; i<n-1; i++){
        if(name[cnt]<name[i+1]){
            min=name[cnt];
        }
        else{
            min=name[i+1];
            cnt=i+1;
        }
        // cout<<min<<endl;
    }

    cout<<min<<endl;

    return 0;
}
