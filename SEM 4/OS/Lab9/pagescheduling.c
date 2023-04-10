#include <stdio.h>
#define n 8
typedef struct s
{
    unsigned char f[8];
    int p;
}str;
int main()
{
    int i,j, c=0;
    str s[n];
    int t[n]={0};
    int inc[n]={ 5, 1 , 2, 4, 1, 3 ,2, 3};
    for(i=0; i<n; i++)
    {
        for(int j=0; j<8; j++)
        {
            s[i].f[j] = '0';
        }
        s[i].p=-9;
    }
    printf("Frame no Page no.\n");
    for (i = 0; i < n; i++)
    {
        printf("%s %d\n", s[i].f, s[i].p);
    }
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(s[i].p==inc[j])
            {
                break;
            }
            if(s[i].p==-9)
            {
                s[i].f[0]='1';
                s[i].p= inc[j];
                t[c++]=1;
                break;
            }
        }
    }
    printf("Frame no Page no.\n");
    for(i=0; i<n;i++)
    {
        printf("%s %d\n", s[i].f, s[i].p);
    }
}