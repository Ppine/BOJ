#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,z;
    int chk=0;
    scanf("%d %d %d",&x,&y,&z);
    if(y>=8000 || z>=260) chk++;
    if(x>=1000 && chk==1) printf("Very Good");
    else if(x>=1000 && chk==0) printf("Good");
    if(x<1000) printf("Bad");



    return 0;
}
