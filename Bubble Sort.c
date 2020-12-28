#include<stdio.h>
void Bubble_sort();
void swap(int *xp, int *yp);
int i,j,min,n;

int main()
{
    int ar[n];
    Bubble_sort(ar);
    return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Bubble_sort(int ar[n])
{
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap(&ar[j],&ar[j+1]);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",ar[i]);
    }
}
