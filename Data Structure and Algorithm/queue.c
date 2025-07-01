#include <stdio.h>
#include <stdlib.h>

void menu(){
    printf("\n\t1. Enqueue");
    printf("\n\t2. Dequeue");
    printf("\n\t3. Display all items");
    printf("\n\t4. Display front item");
    printf("\n\t5. EXIT");
    printf("\n\t   Choose option: ");
}

int main()
{
    int front = 0, rear = -1, maxsize = 5, item, choice, i;
    int queue[maxsize];
    start:
        menu();
        scanf("%d", &choice);
        switch(choice){
        case 1:
            if (rear >= maxsize - 1){
                printf("\n\tQueue full\n");
            }else{
                printf("\n\tEnter the item: ");
                scanf("%d", &item);
                rear++;
                queue[rear] = item;
            }
            break;
        case 2:
            if ( front > rear){
                printf("\n\tQueue empty\n");
            }else{
                item = queue[front];
                printf("\n\tThe dequeued item is %d\n",item);
                front++;
            }
            break;
        case 3:
            if (front > rear){
                printf("\n\tQueue empty\n");
            }else{
                printf("\n\tAll items on queue are: ");
                for(i = front; i <= rear; i++){
                    printf("\t%d",queue[i]);
                }
                printf("\n");
            }
            break;
        case 4:
            if (front > rear){
                printf("\n\tQueue empty\n");
            }else{
                printf("\n\tThe front item in queue is    %d \n",queue[front]);
            }
            break;
        case 5:
            exit(1);
        default:
            printf("\n\tIncorrect option. Try again!\n");
            break;
        }
        goto start;
    return 0;
}
