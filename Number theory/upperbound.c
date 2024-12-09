#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+2];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //founding value...
    int found,first=0,last=n-1,mid;
    scanf("%d",&found);
    while(first<=last){
           mid=(first+last)/2;
        if(arr[mid]<found){
            first=mid+1;
        }
        else if(arr[mid]>found){
            last=mid-1;
        }
        else {
            printf("%d",mid+1);
            break;
        }
     
    }


    return 0;
}
