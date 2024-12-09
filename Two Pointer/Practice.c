#include<stdio.h>
int main()
{
        char arr[5]={5,1,15, 20,25};
        char temp;
        temp= (arr+1)[2];
        printf("%d", temp);

//        int i,j,m;
//        i= ++a[1];
//        j= a[1]++;
//        m= a[i++];
//        printf("%d %d %d", i,j,m);
        return 0;
}
