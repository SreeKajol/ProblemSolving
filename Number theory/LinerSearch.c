#include<stdio.h>
int main()
{
   int n,arr[50];
   scanf("%d",&n);
   for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
   }
   ///finding value 
   int find,pos=-1,count=0;
   scanf("%d",&find);
   for(int i=0; i<n; i++){
    if(arr[i]==find){
        pos=1;
        break;
    }
    count++;
   }

if(pos==-1){
    printf("Invalid value.\n");
}
else{
    printf("Value is founded.\n");
    printf("position is: %d\n",count+1);
}

    return 0;
}