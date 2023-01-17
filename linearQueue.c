#include <stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int queue_array[50];
int MAX;
int rear = - 1;
int front = - 1;
int main()
{
int choice;
printf("Maximum Size of the Queue (<50):");
scanf("%d", &MAX);
while (1)
{
printf("\n 1.Insert element to queue \n");
printf("2.Delete element from queue \n");
printf("3.Display all elements of queue \n");
printf("4.Quit \n");

printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}
void insert()
{
int item;

if(rear == MAX - 1)
printf("\n Queue Overflow");
else
{
if(front== - 1)
front = 0;
printf("\n Insert the element in queue : ");
scanf("%d", &item);
rear = rear + 1;
queue_array[rear] = item;
}
}
void delete()
{
if(front == - 1 || front > rear)
{
printf("Queue Underflow \n \n");
return;
}
else
{
printf("\n Element deleted from queue is : %d \n\n", queue_array[front]);
front = front + 1;

}
}
void display()
{
int i;
if(front == - 1)
printf("\n Queue is empty \n \n");
else
{
printf("Queue is : \n");
for(i = front; i <= rear; i++)
printf("%d ", queue_array[i]);
printf("\n\n");
}
}
