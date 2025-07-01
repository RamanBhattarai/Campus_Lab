#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct list{
    int info;
    struct list *next;
};
typedef struct list node;
node *start, *ptr;

void menu(){
    printf("\n\t1.  Insert at beginning\n");
    printf("\t2.  Insert at end\n");
    printf("\t3.  Insert at specified position\n");
    printf("\t4.  Delete from beginning\n");
    printf("\t5.  Delete from end\n");
    printf("\t6.  Delete from specified position\n");
    printf("\t7.  Traversing and Displaying all elements\n");
    printf("\t8.  Searching\n");
    printf("\t9.  Exit\n");
}

void f_insert(){
    node *item;
    item = (node*)malloc(sizeof(node));
    printf("\n\tEnter data to insert: ");
    scanf("%d",&item->info);
    if (start == NULL){
        item->next = NULL;
    }else{
        item->next = start;
    }
    start = item;
}

void e_insert(){
    node *item, *temp;
    item = (node*)malloc(sizeof(node));
    printf("\n\tEnter data to insert: ");
    scanf("%d",&item->info);
    item->next = NULL;
    if (start == NULL){
        start = item;
    }else{
        temp = start;
        while(temp->next != NULL){
            temp = temp->next;
        }
    temp->next = item;
    }
}

void n_insert(){
    int n, count = 1;
    node *item, *temp;
    item = (node*)malloc(sizeof(node));
    printf("\n\tEnter the position: ");
    scanf("%d",&n);
    printf("\n\tEnter data to insert: ");
    scanf("%d",&item->info);
    temp = start;
    while(count < n-1){
        temp = temp->next;
        count++;
    }
    item->next = temp->next;
    temp->next = item;
}

void f_delete(){
    node *ptr;
    if (start == NULL){
        printf("\n\tEmpty list");
        getch();
    }else if( start->next == NULL){
        printf("\n\tDeleted item is %d",start->info);
        free(start);
        start = NULL;
    }else{
        ptr = start;
        start = start->next;
        printf("\n\tDeleted item is %d",ptr->info);
        getch();
        free(ptr);
    }
}

void e_delete(){
    node *ptr, *loc;
    if (start == NULL){
        printf("\n\tEmpty list");
        getch();
    }else if( start->next == NULL){
        printf("\n\tDeleted item is %d",start->info);
        free(start);
        start = NULL;
    }else{
        ptr = start;
        while( ptr->next != NULL){
            loc = ptr;
            ptr = ptr->next;
        }
        loc->next = NULL;
        printf("\n\tDeleted item is %d",ptr->info);
        free(ptr);
        getch();
    }
}

void n_delete(){
    node *ptr, *temp;
    int n, count = 1;
    if (start == NULL){
        printf("\n\tEmpty list");
        getch();
    }else{
        printf("\n\tEnter a position: ");
        scanf("%d", &n);
        ptr = start;
        while( count < n){
            count++;
            temp = ptr;
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        printf("\n\tDeleted item is %d",ptr->info);
        free(ptr);
        getch();
    }
}

void traverse(){
    node *temp;
    printf("\n\tElements of linked lists are: ");
    temp = start;
    while( temp != NULL){
        printf("\t%d",temp->info);
        temp = temp->next;
    }
    getch();
}

void search(){
    node *loc;
    int data, count = 0;
    printf("\n\tEnter the element to search: ");
    scanf("%d",&data);
    loc = start;
    while( loc != NULL){
        count++;
        if (loc->info == data){
            printf("\n\tThe item %d is in %d position\n", data, count);
        }
        loc = loc->next;
    }
}

int main(){
    int choice;
    menu();
    while(1){
        printf("\n\n\t    Choose option: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            f_insert();
            break;
        case 2:
            e_insert();
            break;
        case 3:
            n_insert();
            break;
        case 4:
            f_delete();
            break;
        case 5:
            e_delete();
            break;
        case 6:
            n_delete();
            break;
        case 7:
            traverse();
            break;
        case 8:
            search();
            break;
        case 9:
            exit(1);
        default:
            printf("\n\tWrong option!   Try again!");
            break;
        }
    }
    return 0;
}
