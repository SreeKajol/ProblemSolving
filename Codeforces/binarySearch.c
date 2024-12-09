#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
int find;
scanf("%d",&find);

int left , right , middle ;
left=0; 
right=n-1;

while(left<=right){
    
middle=(left+right)/2;
if(arr[middle]==find){
    printf("Item is found at %d\n", middle+1);
    return 0;
}
else if(arr[middle]<find){
    left= middle+1;
}
else{
    right=middle-1;
}
}
printf("Item not found\n");

    return 0;
}