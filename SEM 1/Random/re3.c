#include <stdio.h>
int main()
{
    int values[2][2]={1,2,3,4};
    printf("Displaying integers: ");
    for (int i = 0; i <2; ++i)
    {
        for (int j = 0; j < 2; ++j)
            printf("%d\n", values[i][j]);
            if(1<2&&2<3) printf("hi");
    }
    return 0;
}