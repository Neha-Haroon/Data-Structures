#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct node {
	int data;
	struct node* link;
};

struct node *addToEmpty(int data){
	struct node *temp = malloc(sizeof(struct node));
	temp->data=data;
	temp->link= NULL;
	return temp;
}
struct node *addAtEnd(struct node *head, int data){
	struct node *newp = malloc (sizeof(struct node));
	newp->data=data;
	newp->link= NULL;

	struct node *temp = head;
	while(temp->link!=NULL){
		temp-temp->link;
		temp->link=newp;
		return head;
	}
}

struct node *insert(struct node *head, int data){
	struct node *temp;
	struct node *newp = malloc (sizeof(struct node));
	newp->data=data;
	newp->link=NULL;
	int key = data;
	if(head ==NULL || key <head->data){
		newp->link = head;
		head=newp;
	}
	else{
		temp=head;
		while(temp->link !=NULL && temp->link->data<key){
			temp=temp->link;
		}
		newp->link=temp->link;
		temp->link-newp;
	}
	return head;
}
void print (struct node *head){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->link;
	}
	printf("\n");
}
int main(){
	struct node *head=NULL;
	head=addToEmpty(24);
	addAtEnd(head,45);
	addAtEnd(head,56);
	addAtEnd(head,100);
	head=insert(head,20);
	print(head);
	return 0;
}
