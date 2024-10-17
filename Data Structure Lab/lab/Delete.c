/* delete an element */
#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],n,k,i,j;
    printf("how many elements in array a: ");
    scanf("%d",&n);
    printf(" elements of array a:\n ");
    for( i=0;i<n;i++)
          scanf("%d",&a[i]);
    printf("enter the possion: ");
    scanf("%d",&k);
    
    for( j=k;j<=n-1;j++)
		{
			a[j]=a[j+1];
			
		}
//		a[k]=item;
		n=n-1;
		printf("new array element after deleting : \n");
		for( i=0;i<n;i++){
             printf("\n");
		   	printf("%d",a[i]);
			
        }	
			getch();
			return 0;

    
           }
