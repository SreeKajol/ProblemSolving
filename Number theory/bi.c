#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+3];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int find_value;
    scanf("%d",&find_value);
    int left, right, mid;
    left=0; 
    right=n-1;
    mid=(left+right)/2;
    while(right<=left){
        if(arr[mid]==find_value){
            printf("%d is here %d", find_value,mid+1);
            return 0;
        }
        else if(arr[mid]>find_value){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        mid=(left+right)/2;
    }
  
        printf("value is not founded.");

    return 0;
}