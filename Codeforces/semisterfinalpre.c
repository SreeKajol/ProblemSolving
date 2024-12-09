// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x=0, y=0, z[]={1, 2,3,4,5,6,7,8,9};
    ++x;
    y++;
    printf("x=%d y=%d\n",x,y);
    
    //printf("x=%d y=%d\n",++x,y++);
    //printf("x=%d y=%d\n",x,y);
    
    z[x++]=++x;
    z[++y]=++y;
    for(int i=0; i<9; i++){
        printf("%d ", z[i]);
    }
    

    return 0;
}