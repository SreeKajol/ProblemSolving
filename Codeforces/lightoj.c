#include <stdio.h>
#include <string.h>
int main()
{
int t;
    scanf("%d", &t);
    while(t--){
            char str[100], sub_str[100];
    scanf("%s", str);
    scanf("%s", sub_str);
    int l = strlen(str);
    int sub_l = strlen(sub_str);

    int i, j, count = 0;

    for (i = 0; i <= l - sub_l; i++)
    {
        for (j = 0; j < sub_l; j++)
        {

            if (str[i + j] != sub_str[j])
                break;
            if (j == sub_l)
            {
                count++;
            }
        }
    }
    
        printf("%d\n", count);

    }
    return 0;
}
