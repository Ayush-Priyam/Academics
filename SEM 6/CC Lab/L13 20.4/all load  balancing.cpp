//Min-min, min-max, max-min, max-max menu driven scheduling algorithm using c++

#include<iostream>
#include<stdlib.h>
#include<limits.h>
using namespace std;
int findMin(int* a,int n,int* ind)
{    int min=a[0];
     *ind=0;
     int i;
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			*ind=i;
		}
	}
	return min;
}
int findMax(int* a,int n,int* ind)
{    int max=a[0];
     *ind=0;
     int i;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			*ind=i;
		}
	}
	return max;
}

int main()
{
    int n,i,process;

    cout<<"Enter number of tasks:";
    cin>>n;
    int num=n;
    int *a=(int*)malloc(n*(sizeof(int)));
	int *b=(int*)malloc(n*(sizeof(int)));
	int* min=(int*)malloc(n*(sizeof(int)));
	int* max=(int*)malloc(n*(sizeof(int)));
	char *minCh=(char *)malloc(n * sizeof(char));
	int minm,minIndex;
    char *maxCh=(char *)malloc(n * sizeof(char));
    int maxm,maxIndex;
    cout<<"Enter process number:";
    cin>>process;

	switch(process)
	{
    case 1:
        cout<<"Executing for min-min algorithm:\n";
        cout<<"Enter the tasks for VM1:";
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}

    cout<<"Enter the tasks for VM2:";
	for(i=0;i<n;i++)
	{
	    cin>>b[i];
	}
	while(num>0)
	{

		for(i=0;i<n;i++)
		{
			if(a[i]<b[i])
			{
				min[i]=a[i];
				minCh[i]='1';
			}
			else
			{
				min[i]=b[i];
				minCh[i]='2';
			}
		}

		minm = findMin(min,n,&minIndex);
		a[minIndex]=b[minIndex]=INT_MAX;

		cout<<"Executing VM%c\'s task %d..."<<minCh[minIndex]<<minIndex+1;

		for(i=0;i<n;i++)
		{
			if(minCh[minIndex]=='1')
			{
				if(a[i]<INT_MAX)
				{
					a[i]=a[i]+minm;
				}
			}
			else
			{
				if(b[i]<INT_MAX)
				{
					b[i]=b[i]+minm;
				}
			}

		}
		num=num-1;
	}
	break;

    case 2:
        cout<<"Executing for MIN-MAX algorithm:\n";
        cout<<"Enter the tasks for VM1:";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the tasks for VM2:";
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
         while(num>0)
         {
             for(i=0;i<n;i++)
             {
                 if(a[i]<b[i])
                 {
                     min[i]=a[i];
                     maxCh[i]='1';

                 }
                 else
                 {
                    min[i]=b[i];
                    maxCh[i]='2';
                 }
             }

         maxm=findMax(min,n,&maxIndex);
         a[maxIndex]=b[maxIndex]=INT_MAX;
         cout<<"Executing for VM%c's task %d...\n"<<maxCh[maxIndex]<<maxIndex+1;
         for(i=0;i<n;i++)
         {
             if(maxCh[maxIndex]=='1')
             {
                 a[i]+=maxm;
             }
             else
             {
                 b[i]+=maxm;
             }
         }
        num=num-1;
	    }
        break;
        case 3:
        cout<<"Executing for MAX-MIN:\n";
        cout<<"Enter the task for VM1:";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the tasks for VM2:";
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
         while(num>0)
         {
             for(i=0;i<n;i++)
             {
                 if(a[i]>b[i])
                 {
                     max[i]=a[i];
                     minCh[i]='1';

                 }
                 else
                 {
                    max[i]=b[i];
                    minCh[i]='2';
                 }
             }

         minm=findMin(min,n,&minIndex);
         a[minIndex]=b[minIndex]=INT_MAX;
         cout<<"Executing for VM%c's task %d...\n"<<minCh[minIndex]<<minIndex+1;
         for(i=0;i<n;i++)
         {
             if(minCh[minIndex]=='1')
             {
                 if(a[i]<INT_MAX)
                 {
                      a[i]+=minm;
                 }

             }
             else
             {
                 if(b[i]<INT_MAX)
                 {
                       b[i]+=minm;
                 }

             }
         }
        num=num-1;
	    }
         break;
         case 4:
        cout<<"Executing for MAX-MAX:\n";
        cout<<"Enter the task for VM1:";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the tasks for VM2:";
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
         while(num>0)
         {
             for(i=0;i<n;i++)
             {
                 if(a[i]>b[i])
                 {
                     max[i]=a[i];
                     maxCh[i]='1';

                 }
                 else
                 {
                    max[i]=b[i];
                    maxCh[i]='2';
                 }
             }

         maxm=findMax(min,n,&maxIndex);
         a[maxIndex]=b[maxIndex]=INT_MAX;
         cout<<"Executing for VM%c's task %d...\n"<<maxCh[maxIndex]<<maxIndex+1;
         for(i=0;i<n;i++)
         {
             if(maxCh[maxIndex]=='1')
             {
                 a[i]+=maxm;
             }
             else
             {
                 b[i]+=maxm;
             }
         }
        num=num-1;
	    }
         break;
         default:
         cout<<"Error";
        break;
	}
 return 0;
}

