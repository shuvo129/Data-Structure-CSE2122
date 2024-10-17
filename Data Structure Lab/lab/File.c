#include<stdio.h>
int main()
{
    FILE * file1;
    file1 = fopen("E:\A.txt" , "w");
    if (file1==NULL){
    printf("not opened\n");}
    else {
        printf("opened\n");}
    char name[25];
    int age=10 , salary=500;
        gets(name);
        ///fgetc(age);
        ///fgetc(salary);
        scanf("%d %d ", &age, &salary);
        fputs(name, file1);

        fprintf(file1," %d %d", age, salary);
        fclose(file1);
}
