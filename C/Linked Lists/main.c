#include <stdio.h>
#include <stdlib.h>

// see generic concepts folder to know about the linked list data structure

// this represents a single node in the linked list
typedef struct Node{
    int val;
    struct Node* next;
} Node;


// this represents a linked list
typedef struct LinkList{
    Node* head;
    int size;
} List;


// this function initializes a linked list for use with a default value for the head node
List* init_list(int val){
    List* tmp = malloc(sizeof(List));
    if(tmp == NULL){
        perror("Failed to initialize list, try again later.");
        return NULL;
    }
    tmp->head = malloc(sizeof(Node));
    if(tmp->head == NULL){
        perror("Failed to initialize head nod.\n");
        free(tmp);
        return NULL;
    }
    tmp->head->val = val;
    tmp->head->next = NULL;
    tmp->size = 1;
    return tmp;
}

// this function gets a specific value from the linked list O(n) complexity
int get(List* list, int index){
    if(index < 0 || index >= list->size) return -1;
    Node* curr_node = list->head;
    int i = 0;
    while(i < list->size && curr_node != NULL){
        if(i == index){
            return curr_node->val;
        }
        curr_node = curr_node->next;
        i++;
    }
    return -1;
}

// this function inserts a new value anywhere in the linked list
void insert(List* list, int val, int index){
    if(!list->head) return;

    if(index < 0 || index >= list->size){
        perror("Error: trying to insert out of bounds of list.\n");
        return;
    }

    Node* new_node = malloc(sizeof(Node));
    if(!new_node){
        perror("Failed to allocate memory for new node.\n");
        return;
    }
    new_node->val = val;

    Node* curr_node = list->head;
    Node* prev_node = NULL;
    int i = 0;
    while(i < list->size){
        if(i == index){
            if(prev_node == NULL){
                list->head = new_node;
                list->head->next = curr_node;
            }
            else{
                prev_node->next = new_node;
                new_node->next = curr_node;
            }
            list->size++;
            return;
        }
        prev_node = curr_node;
        curr_node = curr_node->next;
        i++;
    }
}

// this function deletes a node from the list at the given index
void pop(List* list, int index){
    if(!list->head) return;
    if(index < 0 || index >= list->size){
        perror("Error: trying to delete out of bounds of list.\n");
        return;
    }
    Node* curr_node = list->head;
    Node* prev_node = NULL;
    int i = 0;
    while(i < list->size){
        if(i == index){
            if(prev_node == NULL){
                Node* tmp = list->head;
                list->head = list->head->next;
                free(tmp);
                list->size--;
                return;
            }
            Node* tmp = curr_node->next;
            free(curr_node);
            prev_node->next = tmp;
            list->size--;
            return;
        }
        prev_node = curr_node;
        curr_node = curr_node->next;
        i++;
    }
}

// this function deletes the whole list
void clear(List* list){
    if(list->size == 0) return;
    while(list->size != 1){
        pop(list, 0);
    }
    free(list->head);
    list->head = NULL;
    list->size = 0;
}

// this function adds an element to the end of the linked list O(n) complexity
void append(List* list, int val){
    Node* new_node = malloc(sizeof(Node));
    if(!new_node){
        perror("Failed to allocate memory for new node\n");
        return;
    }
    new_node->val = val;
    new_node->next = NULL;
    if(list->head == NULL){
        list->head = new_node;
    }else{
        Node* curr_node = list->head;
        while(curr_node->next != NULL){
            curr_node = curr_node->next;
        }
        curr_node->next = new_node;
    }
    list->size++;
}



int main(){
    List* list;
    list = init_list(10);
    for(int i = 2; i <= 10; i++){
        append(list, i * 10);
    }
    pop(list, 3);
    insert(list, 100, 0);
    for(int i = 0; i < list->size; i++){
        printf("list[%d] : %d\n", i, get(list, i));
    }

    clear(list);
}