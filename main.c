// C implementation to remove duplicates from an 
// unsorted doubly linked list 

#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 

// a node of the doubly linked list 
struct Node { 
    int data; 
    struct Node* next; 
    struct Node* prev; 
}; 
  
// Function to delete a node in a Doubly Linked List. 
// head_ref --> pointer to head node pointer. 
// del  -->  pointer to node to be deleted. 
void deleteNode(struct Node** head_ref, struct Node* del) 
{ 
    // base case 
    if (*head_ref == NULL || del == NULL) 
        return; 
  
    // If node to be deleted is head node 
    if (*head_ref == del) 
        *head_ref = del->next; 
  
    // Change next only if node to be deleted 
    // is NOT the last node 
    if (del->next != NULL) 
        del->next->prev = del->prev; 
  
    // Change prev only if node to be deleted 
    // is NOT the first node 
    if (del->prev != NULL) 
        del->prev->next = del->next; 
  
    // Finally, free the memory occupied by del 
    free(del); 
} 
  
// function to remove duplicates from 
// an unsorted doubly linked list 
void removeDuplicates(struct Node** head_ref) 
{ 
    // if DLL is empty or if it contains only 
    // a single node 
    if ((*head_ref) == NULL ||  
        (*head_ref)->next == NULL) 
        return; 
  
    struct Node* ptr1, *ptr2; 
  
    // pick elements one by one 
    for (ptr1 = *head_ref; ptr1 != NULL; ptr1 = ptr1->next) { 
        ptr2 = ptr1->next; 
  
        // Compare the picked element with the 
        // rest of the elements 
        while (ptr2 != NULL) { 
  
            // if duplicate, then delete it 
            if (ptr1->data == ptr2->data) { 
  
                // store pointer to the node next to 'ptr2' 
                struct Node* next = ptr2->next; 
  
                // delete node pointed to by 'ptr2' 
                deleteNode(head_ref, ptr2); 
  
                // update 'ptr2' 
                ptr2 = next; 
            } 
  
            // else simply move to the next node 
            else
                ptr2 = ptr2->next; 
        } 
    } 
} 
  
// Function to insert a node at the beginning 
// of the Doubly Linked List 
void push(struct Node** head_ref, int new_data) 
{ 
    // allocate node 
    struct Node* new_node =  
        (struct Node*)malloc(sizeof(struct Node)); 
  
    // put in the data 
    new_node->data = new_data; 
  
    // since we are adding at the beginning, 
    // prev is always NULL 
    new_node->prev = NULL; 
  
    // link the old list off the new node 
    new_node->next = (*head_ref); 
  
    // change prev of head node to new node 
    if ((*head_ref) != NULL) 
        (*head_ref)->prev = new_node; 
  
    // move the head to point to the new node 
    (*head_ref) = new_node; 
} 
  
// Function to print nodes in a given doubly  
// linked list 
void printList(struct Node* head) 
{ 
	int count =0;
    // if list is empty 
    if (head == NULL) 
        printf("Doubly Linked list empty"); 
  
    while (head != NULL) { 
        printf("%d ",head->data);
        head = head->next;
		count++;
		if(count%5 == 0)
			printf("\r\n");
    } 
	count=0;
} 
  
// Driver program to test above 
int main() 
{ 
    struct Node* head = NULL; 
	int array[200] = {}; 
	// Generated 200 element with [0:49] randomly
	for (int loop=0; loop < 200 ;loop++)
	{
		array[loop] = (rand() % 49);
	}
	// Create the doubly linked list: 
	for (int loop=0; loop < 200 ;loop++)
	{
		push(&head, array[loop]);
	}
	
    printf("Original Doubly linked list:\r\n"); 
    printList(head); 
  
    /* remove duplicate nodes */
    removeDuplicates(&head); 
  
    printf("\nDoubly linked list after removing duplicates:\r\n"); 
    printList(head); 
  
    return 0; 
} 
