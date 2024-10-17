/*linear scarch */
#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],n,i,item,loc=0;
    printf("how many elements in array a: ");
    scanf("%d",&n);
    printf(" elements of array a:\n ");
    for( i=0;i<n;i++)
          scanf("%d",&a[i]);
    
    printf("enter the item: ");
    scanf("%d",&item);
    a[n]=item;
    while(a[loc]!=item)
		loc=loc+1;
	if(loc==n)
		loc=0;
	printf("posion of this num:");
	printf("%d",loc);
	getch();
	return 0;
	
}
