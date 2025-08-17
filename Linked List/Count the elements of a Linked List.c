#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
// Function to count the elements in the linked list
int countElements(struct node *head) {
int count = 0;
struct node *temp = head;
while (temp != NULL) {
count++;
temp = temp->next;
}
return count;
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
// Print linked list
printf("Linked List: ");
temp = head;
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
// Count elements in the linked list
printf("Number of elements in the linked list: %d\n", countElements(head));
}
