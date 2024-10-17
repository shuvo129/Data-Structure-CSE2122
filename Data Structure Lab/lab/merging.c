/*merging two linear array */

#include<stdio.h>
#include<conio.h>
//#define max 20;
int main(){
     
     int na,nb,ptr,i,k,r,s;
     int a[20], b[20], c[20];
     printf("enter  the num of element of array a :");
     scanf("%d",&r);
     printf("\n enter the elements of array a (in ascending order):");
     for( i=1;i<=r;i++) 
     {
             printf("a[%d]=",i);
             scanf("%d",&a[i]);
     }
             
     printf("enter  the num of element of array b :");
     scanf("%d",&s);
     printf("\n enter the elements of array b (in ascending order):");
     for( i=1;i<=s;i++)
     {
             printf("b[%d]=",i);
             scanf("%d",&b[i]);
     }             
     while(na<=r&&nb<=s)
     {
                        if(a[na]<b[nb]){
                                        c[ptr]=a[na];
                                        ptr++;
                                        na++;
                                        }
                         else
                         {
                             c[ptr]=b[nb];
                             ptr++;
                             nb++;

                             }  
     }
     if(na>r){
              for(k=0;k<=s-nb;k++)
                       c[ptr+k]=b[nb+k];
              }
              
              
     else
     {
         
              for(k=0;k<=r-na;k++)
                       c[ptr+k]=a[na+k]; 
     }
     
     printf("\n here is the array c after merging array a and b:\n");
     for(i=1;i<=r+s;i++)
     printf("%d",c[i]);
     getch();
     return 0;
     }                       
