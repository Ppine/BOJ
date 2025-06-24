#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    char com[10];
    int s[21]={0};
    scanf("%d",&n);
    for(int j=0; j<n; j++){
        scanf(" %s",com);
        if(strcmp(com,"add")==0){
            scanf("%d",&x);
            s[x]=1;
        }
        else if(strcmp(com,"remove")==0){
            scanf("%d",&x);
            s[x]=0;
        }
        else if(strcmp(com,"check")==0){
            scanf("%d",&x);
            printf("%d\n",s[x]);
        }
        else if(strcmp(com,"toggle")==0){
            scanf("%d",&x);
            s[x] = 1-s[x];
        }
        else if(strcmp(com,"all")==0){
            for(int i=1; i<21; i++) s[i]=1;
        }
        else if(strcmp(com,"empty")==0){
            for(int i=1; i<21; i++) s[i]=0;
        }
    }

    return 0;
}
