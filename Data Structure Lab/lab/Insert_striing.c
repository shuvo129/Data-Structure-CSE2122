/* insert an element */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char a[100][100]; char item[100]; 
    int n,i,j,k;
     printf("enter the item: ");
    gets(item);
    printf("how many elements in array a: ");
    scanf("%d",&n);
    printf(" elements of array a:\n ");
    for( i=0;i<n;i++)
          gets(a[i]);
    printf("enter the possion: ");
    scanf("%d",&k);
   
    
    
    for( j=n-1;j>=k;j--)
		{
			strcpy(a[j+1],a[j]);
			
		}
		strcpy(a[k],item);
		n=n+1;
		
		printf("new array element after inserting : \n");
		for( i=0;i<n;i++){
             printf("\n");
		   	puts(a[i]);
			
        }	
			getch();
			return 0;

    
           }
