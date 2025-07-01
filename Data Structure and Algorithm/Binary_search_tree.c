#include <stdio.h>
#include <stdlib.h>

struct tree{
    int info;
    struct tree *left, *right;
};
typedef struct tree node;
node *root = NULL;

void menu(){
    printf("\n\t1. Insert an element");
    printf("\n\t2. In-order traversing");
    printf("\n\t3. Pre-order traversing");
    printf("\n\t4. Post-order traversing");
    printf("\n\t5. Exit");
}

void insert(){
    //create new node and input data
    node *new_node = (node*)malloc(sizeof(node));
    int data;
    printf("\n\t  Enter the element: ");
    scanf("%d",&data);
    new_node->info = data;
    new_node->left = NULL;
    new_node->right = NULL;
    //if binary tree empty then
    if (root==NULL){
        root = new_node;
        printf("\n\tRoot node having data %d was created\n",data);
        return;
    }
    //to get correct position to enter data
    node *temp = root;
    node *prev = NULL;
    while(temp!=NULL){
        prev = temp;
        if(data > temp->info){
            temp = temp->right;
        }else{
            temp = temp->left;
        }
    }
    if(data > prev->info){
        prev->right = new_node;
    }else{
        prev->left = new_node;
    }
    printf("\n\tNew node having data %d was inserted\n",data);
}

void inorder_traverse(node *temp){
    if (root == NULL){
        printf("\n\t  Tree is empty\n");
        return;
    }
    if (temp == NULL){
        return;
    }
    inorder_traverse(temp->left);
    printf("%d\t",temp->info);
    inorder_traverse(temp->right);
}

void preorder_traverse(node *temp){
    if (root == NULL){
        printf("\n\t  Tree is empty\n");
        return;
    }
    if (temp == NULL){
        return;
    }
    printf("%d\t",temp->info);
    preorder_traverse(temp->left);
    preorder_traverse(temp->right);
}

void postorder_traverse(node *temp){
    if (root == NULL){
        printf("\n\t  Tree is empty\n");
        return;
    }
    if (temp == NULL){
        return;
    }
    postorder_traverse(temp->left);
    postorder_traverse(temp->right);
    printf("%d\t",temp->info);
}

int main(){
    int choice;
    menu();
    while(1){
        printf("\n\t   Choose an option: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            insert();
            break;
        case 2:
            printf("\n\t  In-order traversing:\n\t\t");
            inorder_traverse(root);
            break;
        case 3:
            printf("\n\t  Pre-order traversing:\n\t\t");
            preorder_traverse(root);
            break;
        case 4:
            printf("\n\t  Post-order traversing:\n\t\t");
            postorder_traverse(root);
            break;
        case 5:
            exit(0);
        default:
            printf("\n\tIncorrect option!\n");
            break;
        }
    }
    return 0;
}
