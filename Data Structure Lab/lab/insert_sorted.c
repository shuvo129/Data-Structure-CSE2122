/* insert an element */
#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],n,k,i,j,item;
    printf("how many elements in array a: ");
    scanf("%d",&n);
    printf(" elements of array a:\n ");
    for( i=0;i<n;i++)
          scanf("%d",&a[i]);
    printf("enter the item: ");
    scanf("%d",&item);
    for(i=0;i<n&&a[i]<item;){
                     
                                   if(a[i]>=item){
                                                  break;
                                                  }
                                   i++;
                                   
                     
                     
                     }
    //possition k.      
    k=i;
    
    for( j=n-1;j>=k;j--)
		{
			a[j+1]=a[j];
			
		}
		a[k]=item;
		n=n+1;
		printf("new array element after inserting : \n");
		for( i=0;i<n;i++){
             printf("\n");
		   	printf("%d",a[i]);
			
        }	
			getch();
			return 0;

    
           }
