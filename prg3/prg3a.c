#include <stdio.h>
#define N 5

int queue[N];
int front=-1,rear=-1;

void enqueue(int x) {
if (rear==N-1) {
printf("Queue overflow\n");
}
else if(front==-1 && rear==-1) {
front=rear=0;
queue[rear]=x;
}
else {
rear++;
queue[rear]=x;
}
}

void dequeue() {
if (front==-1 && rear==-1){
printf("Queue is empty\n");
}
else if(front==rear){
printf("Deleted element is:  %d\n",queue[front]);
front=rear=-1;
}
else{
printf("Deleted element is: %d\n",queue[front]);
front++;
}
}

void display() {
if (front==-1 && rear==-1){
printf("Queue is empty\n");
}
else {
printf("Queue elements are:\n");
for(int i=front;i<=rear;i++){
printf("%d ",queue[i]);
}
printf("\n");
}
}

void peek(){
if (front==-1 && rear==-1){
printf("Queue is empty\n");
}
else{
printf("Front element: %d\n",queue[front]);
}
}

int main() {
int choice,x;

do{
printf("\n1.Enqueue\n");
printf("2.Dequeue\n");
printf("3.Display\n");
printf("4.Peek\n");
printf("5.Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);

switch(choice) {
case 1:
    printf("Enter element to insert: ");
    scanf("%d",&x);
    enqueue(x);
    break;

case 2:
    dequeue();
    break;

case 3:
    display();
    break;

case 4:
    peek();
    break;

case 5:
    printf("Exiting....\n");
    break;

default:
    printf("Invalid Choice\n");
}
}
while (choice !=5);
return 0;
}












