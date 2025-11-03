#include <stdio.h>
#define N 5

int queue[N];
int front=-1,rear=-1;

void enqueue(int x) {
if(front==-1 && rear==-1) {
front=rear=0;
queue[rear]=x;
printf("Inserted element %d into the queue\n",queue[rear]);
}
else if((rear+1)%N==front){
printf("Queue is full\n");
}
else {
rear=(rear+1)%N;
printf("Inserted element %d into the queue\n",x);
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
front=(front+1)%N;
}
}

void display() {
if (front==-1 && rear==-1){
printf("Queue is empty\n");
}
else {
        printf("Queue elements are:\n");
        int i;
        for (i = front; i !=rear; i=(i + 1) % N)
            {
            printf("%d ", queue[i]);
        }
         printf("%d ", queue[i]);
        }
printf("\n");
}




int main() {
int choice,x;

do{
printf("\n1.Enqueue\n");
printf("2.Dequeue\n");
printf("3.Display\n");
printf("4.Exit\n");
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
    printf("Exiting....\n");
    break;

default:
    printf("Invalid Choice\n");
}
}
while (choice !=4);
return 0;
}












