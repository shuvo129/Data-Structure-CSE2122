#include <stdio.h>
int main()
{
    int array[100],i,position,n,value;

    printf("Enter number of elements in array\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);

    printf("Enter the location\n");
    scanf("%d",&position);

    printf("Enter the value\n");
    scanf("%d",&value);

    for(i=n-1;i>=position-1;i--)
    array[i+1]=array[i];
    array[position-1]=value;
    printf("Resultant array is\n");

    for(i=0;i<=n;i++)
    printf("%d\n",array[i]);
    return 0;
}
