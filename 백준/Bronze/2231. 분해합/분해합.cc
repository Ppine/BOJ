#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,temp,sum;
    scanf("%d",&n);
// 10-> /2한 값
// 99-> 90
// 999
// 999999 54 n-
    if((n%2==0)&&(n<=10)){
        printf("%d\n",n/2);//10까지
        return 0;
    }
    else if((n%2==1)&&(n<=10)){
        printf("0");
        return 0;
    }
    for(int i=10; i<n; i++){
        sum=i;
        temp=i;
        while(temp>9){
            sum+=temp%10;
            temp/=10;
        }
        sum+=temp;
        if(sum==n){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("0");
    return 0;
}
