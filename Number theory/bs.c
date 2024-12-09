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
    while(right<=left){
        if(arr[mid]==find_value){
            printf("%d", mid+1);
            break;
        }
        else if(arr[mid]>find_value){
           right=mid-1;
        }
        else{
            left=mid+1;
        }
        mid=(left+right)/2;
    }

if(mid>0){
            printf("value is not founded.");
}

    return 0;
}
