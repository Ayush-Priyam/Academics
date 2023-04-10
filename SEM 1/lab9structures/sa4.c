#include <stdio.h>
struct Complex
{
    float r;
    float i;
};
struct Complex sum(struct Complex, struct Complex );
int main()
{
    struct Complex c1, c2, cs;
    printf("\nEnter real and imaginary part for 1st complex number: ");
    scanf("%f%f", &c1.r, &c1.i);
    printf("Enter feet and inch for 2nd distance: ");
    scanf("%f%f", &c2.r, &c2.i);
    cs=sum(c1,c2);
    printf("\nSum of complex numbers = %.3f +%.3fi\"", cs.r, cs.i);
    return 0;
}
struct Complex sum(struct Complex a, struct Complex b)
{
    struct Complex s;
    s.r=a.r+b.r;
    s.i=a.i+b.i;
    return s;

}