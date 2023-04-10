#include <stdio.h>
int a[100];
int top;
void ins(int, int);
void display()
{
    printf("t=%d\t", top);
    for(int i=0; i<=top; i++)
    printf("%d,", a[i]);
    printf("\n");
}
int main()
{
    top=-1;
    int n, p;
    while(1)
    {
        printf("Enter value and pos to insert:");
        scanf("%d%d", &n, &p);
        if(n==-1) return 0;
        ins(n,p);
        display();
        
    }
}
void ins(int n, int p)
{
    //printf("hello ");
    if(top==-1)
    {
        for(int i=0; i<n; i++)
        a[i]=n;
        top+=n;
    }
    else if(top<p)
    {
        for (int i = top+1 ; i < top+ n+1; i++)
            a[i] = n;
        top += n;
    }
    else
    {
        int pos=0;
        for(int i=p; i>0&& i<=top+1; i++)
        {
            if(a[i-1]!=a[i])
            {
                pos=i;
                break;
            }
        }
        printf("Posi=%d", pos);
        for(int k=1; k<=n;k++)
        {
            for (int i = top; i >= pos; i--)
            {
                a[i + 1] = a[i];
            }
            top++;
        }
        for(int i=pos; i<pos+n;i++)
        {
            a[i]=n;
        }
    }
}