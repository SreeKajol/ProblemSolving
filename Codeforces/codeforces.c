#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        char str[101], arr[101];
        scanf("%s", str);
        int l=strlen(str);
        if(l==2){
            printf("%s\n", str);
        }
        else {
        int i=0, j=0;
        for( i=0, j=0; str[i]!='\0'; i+=2,j++){
            arr[j]=str[i];
        }
        arr[j]=str[l-1];
        arr[j+1]='\0';
    printf("%s\n", arr);
        }
    }
    return 0;
}