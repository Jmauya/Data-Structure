#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
// Function to search an element in the linked list
int searchElement(struct node *head, int key) {
struct node *temp = head;
int position = 1;
while (temp != NULL) {
if (temp->data == key)
return position; // Return position if found
temp = temp->next;
position++;
}
return -1; // Return -1 if not found
}
int main() {
struct node *head = NULL, *newnode, *temp;
int input, key;
printf("If you want to create a linked list then type 1: ");
scanf("%d", &input);
while (input == 1) {
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
printf("Do you want to continue? Type 1 for Yes, 0 for No: ");
scanf("%d", &input); // Updating input to avoid infinite loop
}
// Print the linked list
printf("Linked List: ");
temp = head;
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
// Searching for an element
printf("Enter the element to search: ");
scanf("%d", &key);
int position = searchElement(head, key);
if (position != -1)
printf("Element %d found at position %d\n", key, position);
else
printf("Element %d not found in the list\n", key);
}
