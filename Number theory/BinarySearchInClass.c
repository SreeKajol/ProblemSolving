#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+3];
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);
    //finding value
    int find;
    scanf("%d",&find);
    int start, last,mid;
    start=0;
    last=n-1;
    while(start<=last){
        if(arr[mid]<find){
            last=mid+1;
        }
        else if(arr[mid]>find){
            last=mid-1;
        }
        else{
            printf("Position: %d",mid+1);
        }
        mid=(start+last)/2;
    }
    if(start>last){
        printf("Value not found!");
    }
}
