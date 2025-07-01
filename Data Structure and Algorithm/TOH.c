#include <stdio.h>

int count=0;

void traverse(int n, char to, char from, char aux){
    count++;
    if (n==1){
        printf("\tDisk 1 is moved from %c to %c\n",to,from);
        return;
    }
    traverse(n-1,to,aux,from);
    printf("\tDisk %d is moved from %c to %c\n",n,to,from);
    traverse(n-1,aux,from,to);
}

int main(){
    int n;
    start:
        printf("\tEnter the number of disks : ");
        scanf("%d",&n);
        if (n>10){
            printf("Will take too long to execute so less no only!");
            goto start;
        }
    printf("\n");
    traverse(n,'a','c','b');
    printf("\n\nThe number of steps required is %d\n",count);
    return 0;
}
