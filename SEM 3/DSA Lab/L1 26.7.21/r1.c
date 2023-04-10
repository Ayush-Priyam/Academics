#include <stdio.h>
#include <math.h>
int dtb(int);
int btd(int, int);
int main()
{
    int a1, a2, a3, a4;
    printf("\nEnter 1st block from right: ");
    scanf("%d", &a1);
    printf("\nEnter 2nd block from right: ");
    scanf("%d", &a2);
    printf("\nEnter 3rd block from right: ");
    scanf("%d", &a3);
    printf("\nEnter 4th block from right: ");
    scanf("%d", &a4);
    int b1 = dtb(a1); //converting blocks to binary
    int b2 = dtb(a2);
    int b3 = dtb(a3);
    int b4 = dtb(a4);
    int num = btd(b1, 0) + btd(b2, 8) + btd(b3, 16) + btd(b4, 24); //findind the decimal equiavelent TO BLOCKS and position and adding
    printf("%d \n", btd(b1, 0));                                   //findind the decimal equiavelent TO BLOCKS and position
    printf("%d \n", btd(b2, 8));
    printf("%d \n", btd(b3, 16));
    printf("%d \n", btd(b4, 24));
    printf("Number= %d", num);
    return 0;
}
int dtb(int n)
{
    int b = 0, i = 0, r;
    while (n != 0)
    {
        r = n % 2;
        n = n / 2;
        b = b + r * pow(10, i);
        i++;
    }
    return b;
}
/*int btd(int n, int b) //function to convert binary to decimal w.r.t. position. b denotes the block's sarting position
{
    int r, dec = 0;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        dec = dec + r * pow(2, b);
        ++b;
    }
    return dec;
}
int b3 = dtb(a3);
int b4 = dtb(a4);
//adding the decimal equiavelent To the *BLOCKS wrt to positions*
int num = btd(b1, 0) + btd(b2, 8) + btd(b3, 16) + btd(b4, 24);
printf("Number= %d", num);
return 0;
}
int dtb(int n) //converting each decimal block to its binary equivalent
{
    int b = 0, i = 0, r;
    while (n != 0)
    {
        r = n % 2;
        n = n / 2;
        b = b + r * pow(10, i);
        i++;
    }
    return b;
}
int btd(int n, int b) //function to convert binary to decimal w.r.t. position.
{                     //b stores the block's starting position. for block 1 starting pos is 0, for block 2 it is 8 and so on
    int r, d = 0;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        d = d + r * pow(2, b);
        ++b;
    }
    return d;
}*/
/*void bshift(int a)//using Bitwise Right Shift >>
{
    if(2*(a>>1)==a)
        printf("Even \n");
    else
        printf("Odd \n");
}*/
/*if(n==1)//subsequent division by results in a 1, then it a power of two
        {
            printf("%d is a power of two", a);
            break;
        }
        if(n<1)//if subsequent divison falls below 1, the number is not a power of 2
        {
            printf("%d is not a power of two", a);
            break;
        }
        n=n/2;*/