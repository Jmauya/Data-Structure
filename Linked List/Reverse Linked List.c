#include <stdio.h>
#include <stdlib.h>
// Define the structure for a linked list node
struct node {
int data;
struct node *next;
};
// Function to reverse the linked list
struct node* reverse(struct node* head) {
struct node *prev = NULL, *current = head, *next = NULL;
while (current != NULL) {
next = current->next;
current->next = prev;
prev = current;
current = next;
}
return prev; // New head of reversed list
}
int main() {
struct node *head = NULL, *newnode, *temp;
int input;
printf("If you want to create a linked list then type 1: ");
scanf("%d", &input);
while (input) {
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter a data: ");
scanf("%d", &newnode->data);
newnode->next = NULL;
if (head == NULL) {
head = temp = newnode;
} else {
temp->next = newnode;
temp = newnode;
}
printf("Do you want to continue? (0/1): ");
scanf("%d", &input);
}
printf("Original Linked List: ");
temp = head;
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
// Reverse the linked list
head = reverse(head);
printf("Reversed Linked List: ");
temp = head;
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
