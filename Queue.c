#include <stdio.h>

void insert();
void delete();
void display();
int n=100;
int queue[100];
int rear = - 1;
int front = - 1;
int main()
{
int choice;
while (1)
{
printf("1.Insert element to queue \n");
printf("2.Delete element from queue \n");
printf("3.Display all elements of queue \n");
printf("4.Quit \n");
printf("Enter your choice : \n");
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
exit(0);

}
}
}
void insert()
{
int item;
if(rear == n - 1)
printf("Queue Overflow \n");
else
{
if(front== - 1)
front=0;
printf("Inset the element in queue : ");
scanf("%d", &item);
rear = rear + 1;
queue[rear] = item;
}
}
void delete()
{
if(front == - 1 || front > rear)
{
printf("Queue Underflow\n");
return;
}
else
{
printf("Element deleted from queue is : %d\n", queue[front]);
front = front + 1;
}
}
void display()
{
int i;
if(front == - 1)
printf("Queue is empty\n");
else
{
printf("Queue is : \n");
for(i = front; i <= rear; i++)
printf("%d\n", queue[i]);
printf("\n");
}
}
