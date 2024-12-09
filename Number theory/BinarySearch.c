#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr1[m][n];
    for(int i=0; i<m ;i ++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n\n");
    int k,p;
    scanf("%d%d",&k,&p);
    int arr2[k][p];
     for(int i=0; i<k ;i ++){
        for(int j=0; j<p; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
         int sum[k][p];
     if(m==k && n==p){
         for(int i=0; i<m ;i ++){
        for(int j=0; j<n; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        printf("\n");
    }
     }
  for(int i=0; i<m ;i ++){
        for(int j=0; j<n; j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
