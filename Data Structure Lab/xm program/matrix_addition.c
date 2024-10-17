#include<stdio.h>
#include<conio.h>
int main(){
   int matrix1[3] [3],matrix2[3] [3],matrix3[3] [3],i,j;

   printf("\n Enter the element of matrix1:\n");
   for(i=0;i<3;i++){
                 for(j=0;j<3;j++)
                 scanf("%d",&matrix1[i][j]);
   }

   printf("\n Enter the elements of matrix2:\n");
   for(i=0;i<3;i++){
                   for(j=0;j<3;j++)
                   scanf("%d",&matrix2[i][j]);
   }

   printf("\n matrix1: \n");
   for(i=0;i<3;i++){
                 for(j=0;j<3;j++)
                 printf("%4d",matrix1[i][j]);
                 printf("\n");
   }

   printf("\n matrix2:\n");
   for(i=0;i<3;i++){
                 for(j=0;j<3;j++)
                 printf("%4d",matrix2[i][j]);
                 printf("\n");
   }

   for(i=0;i<3;i++){
                  for(j=0;j<3;j++)
                    matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
    }

    printf("\n Addition matrix:\n");
    for(i=0;i<3;i++){
                 for(j=0;j<3;j++)
                 printf("%4d",matrix3[i][j]);
                 printf("\n");
    }

   return 0;

}
