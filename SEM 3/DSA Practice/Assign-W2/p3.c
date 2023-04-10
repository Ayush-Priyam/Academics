#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n;
struct node
{
    float x,y;
    int nb;
};
float dist(struct node n1, struct node n2)
{
    float a= pow(n1.x-n2.x,2)+pow(n1.y-n2.y,2);
    return sqrt(a);
}
void compute(struct node *a)
{
    int d;
    printf("Enter max distance for a neighbour: ");
    scanf("%d",&d);
    for(int i=0;i<n;i++)
    {   
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j && dist(a[i],a[j])<d)
            {
                //printf("%f\n", dist(a[i], a[j]));
                c++;
            }
        }
        //printf("%d\n", c);
        a[i].nb=c;
    }
}
struct node* initialize()
{
    printf("Input no of nodes: ");
    scanf("%d", &n);
    struct node *a= calloc(n, sizeof(struct node));
    for(int i=0;i<n;i++)
    {
        printf("Enter X and Y coordinate for node %d: ", i+1);
        scanf("%f%f",&a[i].x,&a[i].y);
    }
    compute(a);
    return a;
}
int main()
{
    float max=0, min=99999;
    int max1, max2, min1, min2;//for storing positions
    struct node *a= initialize();
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("No. of Node %d neighbours: %d\n",i+1,a[i].nb);//printing no of neighbours
        for (int j = 0; j < n; j++)//calc min and max distance
        {
            if (i != j && max < dist(a[i], a[j]))
            {
                max= dist(a[i], a[j]);
                max1=i+1;
                max2=j+1;
            }
            if (i != j && min > dist(a[i], a[j]))
            {
                min = dist(a[i], a[j]);
                min1=i+1;
                min2=j+1;
            }
        }
    }
    printf("\nMinimum distance Nodes: Node %d(%d,%d) and Node %d(%d,%d)\n", min1, a[min1].x, a[min1].y, min2, a[min2].x, a[min2].y);
    printf("Maximum distance Nodes: Node %d(%d,%d) and Node %d(%d,%d)", max1, a[max1].x, a[max1].y, max2, a[max2].x, a[max2].y);
}