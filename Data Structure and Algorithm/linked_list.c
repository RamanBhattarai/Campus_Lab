#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct list{
    int info;
    struct list *next;
};
typedef struct list node;
node *start;

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
    printf("\t    Choose option: ");
}

void insert_at_front(){
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

void insert_at_end(){
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

void insert_at_any_position(){
    int n, count = 1;
    node *item, *temp;
    item = (node*)malloc(sizeof(node));
    printf("\n\tEnter the position: ");
    scanf("%d",&n);
    printf("\n\tEnter data to insert: ");
    scanf("%d",&item->info);
    temp = start;
    while(count < n){
        temp = temp->next;
        count++;
    }
    item->next = temp->next;
    temp->next = item;
}

void delete_from_front(){
    node *ptr;
    if (start == NULL){
        printf("\n\tEmpty list");
        getch();
    }else if(start->next == NULL){
        printf("\n\tDeleted item is %d",start->info);
        free(start);
        start = NULL;
    }else{
        ptr = start;
        start = start->next;
        printf("\n\tDeleted item is %d",ptr->info);
        free(ptr);
        getch();
    }
}

void delete_from_end(){
    node *ptr, *loc;
    if (start == NULL){
        printf("\n\tEmpty list");
        getch();
    }else if(start->next == NULL){
        printf("\n\tDeleted item is %d",start->info);
        free(start);
        start = NULL;
    }else{
        ptr = start;
        while(ptr->next != NULL){
            loc = ptr;
            ptr = ptr->next;
        }
        loc->next = NULL;
        printf("\n\tDeleted item is %d",ptr->info);
        free(ptr);
        getch();
    }
}

void delete_from_any_position(){
    node *ptr, *temp;
    int n, count = 1;
    if (start == NULL){
        printf("\n\tEmpty list");
        getch();
    }else{
        printf("\n\tEnter the position: ");
        scanf("%d",&n);
        ptr = start;
        while(count < n){
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
    printf("\n\tElement of linked lists are: ");
    temp = start;
    while (temp != NULL){
        printf("\t%d",temp->info);
        temp = temp->next;
    }
    getch();
}

void search(){
    node *loc;
    int count = 0,data = 0;
    printf("\n\tEnter the item to search: ");
    scanf("%d",&data);
    loc = start;
    while(loc != NULL){
        count++;
        if (loc->info == data){
            printf("\n\tThe item %d is present in %d position\n",data,count);
        }
        loc = loc->next;
    }
}

int main(){
    int option;
    while(1){
        menu();
        scanf("%d",&option);
        switch(option){
        case 1:
            insert_at_front();
            break;
        case 2:
            insert_at_end();
            break;
        case 3:
            insert_at_any_position();
            break;
        case 4:
            delete_from_front();
            break;
        case 5:
            delete_from_end();
            break;
        case 6:
            delete_from_any_position();
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
            printf("\n\tWrong option!  Try again!\n");
            break;
        }
    }
    return 0;
}
