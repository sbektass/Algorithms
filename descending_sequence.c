#include <stdio.h> 
#include <stdlib.h> 
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
  
void append(struct Node** head, int value) 
{ 
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); 
    struct Node *temp = *head; 
    newNode->data  = value; 
    newNode->next = NULL; 
    if (*head == NULL) 
    { 
       *head = newNode; 
       return; 
    } 
    while (temp->next != NULL) 
        temp = temp->next; 
    temp->next = newNode; 
    return; 
} 
int main() 
{ 

struct Node* head = NULL; 
int a=0;
scanf("%d",&a);
	while(a!=-1)
	{
		append(&head,a);
		scanf("%d",&a);
	}
		append(&head,-1);
		append(&head,-1);
	while(head->data!=-1)
	{   
		while( (head->data) > (head->next->data))
		{
			if(head->next->data!=-1)
			{
				printf("%d ",head->data);
			}
			
			else
			{
				printf("%d",head->data);
			}	
			
			if( (head->data) > (head->next->data) && (head->next->data)<(head->next->next->data) && (head->next->data!=-1) && (head->next->next->data!=-1) )
			{
				printf("%d\n", head->next->data);
				head=head->next;
			}
		
			head=head->next;
		}  
	  
		while( (head->data) < (head->next->data) )
		{
		
			if(head->next->data!=-1)
			{
				printf("%d ",head->data);
			}
			
			else
			{
				printf("%d",head->data);
			}	
				
			if( (head->data) < (head->next->data) && (head->next->data)>(head->next->next->data)&& (head!=NULL)  && (head->next->data!=-1) && (head->next->next->data!=-1))
			{
				printf("%d\n", head->next->data);
				head=head->next;
			}		
			head=head->next;
		}  
	 
	}  
  return 0; 
} 
