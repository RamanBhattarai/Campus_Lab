/*    WAP to perform all operation of doubly linked list having following operation
    a. insert at beginning
    b. insert at end
    c. insert at specified position
    d. delete from beginning
    e. delete from end
    f. delete from specified position
    g. Traverse and Display
    h. Searching
*/

#include <stdio.h>
#include <stdlib.h>

struct list{
    int info;
    struct list *prev;
    struct list *next;
};
typedef struct list node;
node *start = NULL;
node *last = NULL;

void DisplayMenu()
{
    printf("\n\t1. Insert at beginning\n");
    printf("\t2. Insert at end\n");
    printf("\t3. Insert at specified position\n");
    printf("\t4. Delete from beginning\n");
    printf("\t5. Delete from end\n");
    printf("\t6. Delete from specified position\n");
    printf("\t7. Traverse and Display\n");
    printf("\t8. Searching\n");
    printf("\t9. Exit\n");
}

void f_insert(){
    int item;
    node *ptr;
    printf("\tEnter data : ");
    scanf("%d",&item);
    ptr = (node *)malloc(sizeof(node));
    ptr->info = item;
    if(start == NULL){
        ptr->prev = NULL;
        ptr->next = NULL;
        start = ptr;
        last = ptr;
    }
    else{
        ptr->prev = NULL;
        ptr->next = start;
        start->prev = ptr;
        start = ptr;
    }
}
void e_insert(){
    node *ptr;
    int item;
    printf("\tEnter data : ");
    scanf("%d",&item);
    ptr = (node*)malloc(sizeof(node));
    ptr->info = item;
    if(start == NULL){
        ptr->prev = NULL;
        ptr->next = NULL;
        start = ptr;
        last = ptr;
    }
    else{
        ptr->next = NULL;
        ptr->prev = last;
        last->next = ptr;
        last = ptr;
    }
}

void n_insert(){
    int n,count=1;
    node *temp,*item;
    item = (node*)malloc(sizeof(node));
    printf("\tEnter position : ");
    scanf("%d",&n);
    printf("\tEnter data : ");
    scanf("%d",&item->info);
    temp = start;
    while(count<n-1){
        temp = temp->next;
        count++;
    }
    item->next = temp->next;
    item->prev = temp;
    temp->next = item;
}

void f_delete(){
    node *ptr;
    if(start == NULL){
        printf("\tEmpty List\n");
    }
    else if(start->next == NULL){
        printf("\tDeleted item is %d\n",start->info);
        free(start);
        start=NULL;
    }
    else{
        ptr=start;
        start=start->next;
        printf("\tDeleted item is %d",ptr->info);
        free(ptr);
        start->prev=NULL;
    }
}

void e_delete(){
    node *ptr,*loc;
    if(start == NULL){
        printf("\tEmpty List\n");
    }
    else if(start->next == NULL){
        printf("\tDeleted item is %d\n",start->info);
        free(start);
        start=NULL;
        last=NULL;
    }
    else{
        /*ptr=last;
        last=last->prev;
        printf("Deleted %d",ptr->info);
        free(ptr);*/
        ptr=start;
        while(ptr->next != NULL){
            loc = ptr;
            ptr = ptr->next;
        }
        loc->next = NULL;
        printf("\tDeleted item is %d",ptr->info);
        free(ptr);
        last=loc;
    }
}

void n_delete(){
    node *ptr,*temp;
    int n,count=1;
    if(start == NULL){
        printf("\tEmpty list\n");
    }
    else{
        printf("\tEnter a position: ");
        scanf("%d",&n);
        ptr=start;
        while(count<n){
            count++;
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        printf("\tDeleted item is %d",ptr->info);
        free(ptr);
    }
}

void TraverseDisplay(){
    node*temp;
    printf("\tElements of linked list are :    ");
    temp = start;
    while(temp!=NULL){
        printf("%d\t",temp->info);
        temp = temp->next;
    }
    printf("\n");
}

void searching(){
    node*temp;
    int data,count = 1,flag = 0;
    printf("\tEnter data : ");
    scanf("%d",&data);
    temp = start;
    while(temp != NULL){
        if(temp->info == data){
            printf("\tPosition : %d",count);
            flag = 1;
            break;
        }
        count++;
        temp=temp->next;
    }
    if(flag != 1){
        printf("%d could not be found in list",data);
    }
}



int main()
{
    int choice;
    DisplayMenu();
    while(1){
        printf("\tChoose your option : ");
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
            TraverseDisplay();
            break;
        case 8:
            searching();
            break;
        case 9:
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}

