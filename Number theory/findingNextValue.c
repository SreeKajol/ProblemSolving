#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+3];
    for(int i=1; i<=n; i++)  scanf("%d",&arr[i]);
    int find;
    scanf("%d",&find);
    int low,high,mid;
    low=1;
    high=n;
    mid=(high+low)/2;
    while(low<=high){
        if(arr[mid]==find){
            printf("Next value: %d",arr[mid+1]);
            break;
        }
        else if(arr[mid]>find){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=(high+low)/2;
    }

    return 0;
}
