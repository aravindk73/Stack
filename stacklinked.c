#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

typedef struct node
{
 int data;
 struct node* link;
}node;

node* head=NULL;

void main()
{
 int ch;
 while(1)
 {
  printf("\n*** Stack Menu ***");
  printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
  printf("\n\nEnter your choice(1-4):");
  scanf("%d",&ch);
  switch(ch)
  {			
   case 1: push();
   break;
   case 2: pop();
   break;
   case 3: display();
   break;
   case 4: exit(0);
   default: printf("\nWrong Choice!!");
   }
 }
}

void push ()  
{  
 int data;  
 node *temp =(node*)malloc(sizeof(node));   
 if(temp == NULL)  
 {  
  printf("Not able to push the element");   
 }  
 else   
 {  
  printf("\nEnter the data :");  
  scanf("%d",&data);  
  if(head==NULL)  
  {         
   temp->data=data;  
   temp->link=NULL;  
   head=temp;  
  }   
  else   
  {  
   temp->data=data;  
   temp->link=head;  
   head=temp;           
  }  
  printf("\nItem pushed\n");                
 }  
}  

void pop()  
{  
 int item;  
 struct node *temp;  
 if (head==NULL)  
 {  
  printf("Underflow");  
 }  
 else  
 {  
  item=head->data;  
  temp=head;  
  head=head->link;  
  free(temp);  
  printf("\nItem popped\n");               
 }
}  

void display()  
{  
 int i;  
 node *temp;  
 temp=head;  
 if(temp == NULL)  
 {  
  printf("Stack is empty\n");  
 }  
 else  
 {  
  printf("\nPrinting Stack elements :\n");  
  while(temp!=NULL)  
  {  
   printf("%d\n",temp->data);  
   temp=temp->link;  
  }  
 }  
}  
