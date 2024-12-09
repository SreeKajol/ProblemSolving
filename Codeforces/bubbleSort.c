#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int j=0; j<n-1; j++){
    for(int i=0; i<n-1-j; i++){
        if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

        flag=1;
        }
    }
    if(flag==0){
        break;
    }
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}