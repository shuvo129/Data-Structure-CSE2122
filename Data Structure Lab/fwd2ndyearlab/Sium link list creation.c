#include<stdio.h>
#include<stdlib.h>
struct st{
    int info;
    struct st* next;
};

typedef struct st* node;

node getnode(){
    node ptr;
    ptr=malloc(sizeof(struct st));
    return ptr;
}

int main(){
    int a,i,j,n,s;
    node start,ptr;
    start=getnode();
    ptr=start;
    printf("Enter no of element: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        ptr->next=getnode();
        ptr=ptr->next;
        ptr->info=a;
    }
    ptr->next=0;
    s=0;
    ptr=start;
    printf("\n\n");
    for(i=0;i<n;i++){
        ptr=ptr->next;
        a=ptr->info;
        s+=a;
        printf("%d\t",a);
    }
    printf("\n%d\t",s);

    getch();
    return 0;
}
