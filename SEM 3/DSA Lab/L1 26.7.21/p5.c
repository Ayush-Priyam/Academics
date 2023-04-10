#include <stdio.h>
int main()
{
    int n, a1,a2,a3,a4;
    printf("Enter 1st block from right: ");
    scanf("%d", &a1);
    printf("Enter 2nd block from right: ");
    scanf("%d", &a2);
    printf("Enter 3rd block from right: ");
    scanf("%d", &a3);
    printf("Enter 4th block from right: ");
    scanf("%d", &a4);
    if (a1 < 256 && a2 < 256 && a3 < 256 && a4 < 256)
    {//subsequent left shifting by 8 and joining the next block by Bitwise OR
        n = (a4 << 8) | a3;
        n= (n<<8)|a2;
        n= (n<<8)|a1;
        printf("\nOriginal Number with all the 4 blocks combined= %d", n);
    }
    else 
    printf("Invalid Input");
}
