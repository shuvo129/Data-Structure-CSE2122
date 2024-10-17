/*binary scarch */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],n,i,item,loc=0,mid, beg,end,ub,lb;

    printf("how many elements in array a: ");
    scanf("%d",&n);

    printf(" elements of array a:\n ");
    for( i=1; i<=n; i++)
        scanf("%d",&a[i]);

    printf("enter the item: ");
    scanf("%d",&item);

    beg=lb=1;
    end=ub=n;
    mid=(int)((beg+end)/2);

    while(beg<=end&&a[mid]!=item)
    {
        if(item<a[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=(int)((beg+end)/2);
    }

    if(a[mid]==item)
        loc=mid;
    else
        loc=0;

    if(loc==0)
        printf("don't found");
    else
        printf("found location : %d",loc);


    getch();
    return 0;

}


