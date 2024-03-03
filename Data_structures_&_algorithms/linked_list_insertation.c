#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
struct node *newnode,*head;

void createlist(){
head=NULL;
}

int menu(){
int c;
printf("\n 1-Insert.");
printf("\n 2-Delete.");
printf("\n 3-Display.");
printf("\n 4-Quit.");
printf("\n 5-Exit.");
printf("\n Enter your Choice:");
label:
scanf("%d",&c);
if(c<1||c>5){
printf("Please enter correct choice\n");
goto label;
}
return c;
}

void insert(int e){
newnode=(struct node *) malloc(sizeof(struct node));
newnode->data = e;
newnode->next = NULL;
if(head==NULL){
head=newnode;
}
else if(e < (int)head->data){
newnode->next = head;
head = newnode;
}
else{
struct node *f,*prev;
f = head->next;
prev = head;
int p = 0;
while(p == 0 && f!=NULL){
if(e > f->data){
prev = f;
f = f->next;
}
else
p = 1;
}
newnode->next = prev->next;
prev->next = newnode;
}
}

void display(){
if(head==NULL){
printf("Queue is empty.\n");
}else{
struct node *ptr;
ptr=head;
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}
}

int main(){
int ch;
createlist();
do{
ch=menu();
switch(ch){
case 1:printf("Enter the element to push:");
      int ele;
  scanf("%d",&ele);
  insert(ele);
  break;
case 2:break;
case 3:display();break;
case 4:printf("Quitting the program...\n");
 break;
case 5:printf("Exiting the program...\n");
}
}while(ch!=5);
return 0;
}
