#include<stdio.h>
void Selection_sort();
void swap(int *xp, int *yp);
int i,j,min,n;

int main()
{
    int ar[n];
    Selection_sort(ar);
    return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void Selection_sort(int ar[n])
{
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            if(ar[min]>ar[j])
            {
                min=j;
            }
        }
        /*int temp= ar[min];
        ar[min]=ar[i];
        ar[i]=temp;*/swap(&ar[min],&ar[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",ar[i]);
    }
}
