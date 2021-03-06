#include<stdio.h>
#include<stdlib.h>
//stack using single linked list                                             
struct node
{
   int data;
   struct node*link;
};
struct node *top=NULL;
struct node *cur;
void push()
{
	cur = (struct node*)malloc(sizeof(struct node));
	printf("Enter the value to be inserted:\n");
	scanf("%d",&(cur->data));
	cur->link=top;
	top=cur;
}
void pop()
{
	if(top == NULL)
        	printf("\nStack is Empty!\n");
        else
	{
		cur=top;
		top=cur->link;
		printf("deleted element is: %d\n",(cur->data));
		cur->link=NULL;
		free(cur); 
   }
}
void display()
{
	if(top == NULL)
      		printf("\nStack is Empty\n");
   	else	
	{
		cur=top;
		printf("Stack is:");
		while(cur!=NULL)
		{
			printf("%d->",cur->data);
			cur=cur->link;
		}
	}
}    
void peek()
{
	if(top!=NULL)
		printf("The top most element is: %d\n",top->data);
}
int main()
{
	int ch, value;
        while(1)
	{
        	printf("Program of stack using single linked list\n");
                printf("1.Push\n2.Pop\n3.Display\n4.peek\n5.exit\n");
                printf("Enter your choice:\n");
		scanf("%d",&ch);
      	switch(ch)
	{
		case 1:push();
			 break;
		case 2:pop(); 
			break;
	 	case 3:display(); 
			break;
		case 4:peek();
			break;
		case 5:exit(0);
	}    
  	}
	return 0;
}
 
