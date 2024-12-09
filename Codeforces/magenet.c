#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[100001];
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    int cnt=0;
    for(int i=0; i<n-1; i++){
        if(str[i]!=str[i+1]){
            cnt++;
        }
    }
    printf("%d\n", cnt+1);

    return 0;
}
