/*bubble sort */
#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],n,i,j,t;

    printf("how many elements in array a: ");
    scanf("%d",&n);

    printf("elements of array a: ");
    for( i=0;i<n;i++)
          scanf("\n%d",&a[i]);
    for(i=0;i<n;i++){
			for(j=0;j<n-i-1;j++){
				if(a[j]<a[j+1]){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}

		}
		printf("array after sorting:");
		for( i=0;i<n;i++)
          printf("\n%d",a[i]);

                       // getch();
                        return 0;
                        }
