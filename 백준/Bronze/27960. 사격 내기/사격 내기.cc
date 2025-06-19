#include <bits/stdc++.h>

using namespace std;

int main(){
    int target[10]={0};
    int a,b;
    int c=0;

    scanf("%d %d",&a,&b);
    for(int i=512; i>=1; i/=2){
        // printf("i=%d\n",i);
        if(a>=i){
            a-=i;
            target[int(log2(i))]++;
            // printf("a=%d\n",int(log2(i)));
        }
        if(b>=i){
            b-=i;
            target[int(log2(i))]++;
        }
    }
    for(int i=0; i<10; i++){
        if(target[i]==1){
            c+=pow(2,i);
            // printf("%d\n",i);
        }
    }
    printf("%d",c);



    return 0;
}
