// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    char str[105];
    gets(str);
    int len=strlen(str);
    int cnt1=0, value=0, d;
    for(int i=0; i<len-1; i++){
        if(str[i]==str[i+1]){
            cnt1++;
        }
        if(value<cnt1){
            value=cnt1;
        }
        if(str[i]!=str[i+1]){
           }
    }
    if(value>=6){
        printf("YES\n");
    }
    else printf("NO\n");

    return 0;
}
