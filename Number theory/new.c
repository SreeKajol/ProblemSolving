#include<stdio.h>
int main(){
    int n, count=0;
    scanf("%d",&n);
    if(n%4==0 || n%7==0){
        printf("YES\n");
    }
    else
    {
        while(n){
        if(n%10==4 || n%10==7){
            count++;
        }
        n=n/10;
    }
    if(count>1){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }


    }
    return 0;
}
