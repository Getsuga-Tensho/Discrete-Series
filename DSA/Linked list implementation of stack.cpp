#include<iostream>
#include<stdlib.h>
//#define MAX 100
using namespace std;
struct node{
	int data;
	struct node *next;
};

typedef struct node nodetype;
nodetype *top = NULL;

void push(){
	struct node *nnode;
	nnode=(nodetype*)malloc(sizeof(nodetype));
	int data;
	cout<<"Enter data: ";
	cin>>data;
	if(top==NULL){
		nnode->data=data;
		nnode->next=NULL;
		top=nnode;
	}
	
	else{
		nnode->next=top;
		nnode->data=data;
		top=nnode;
	}
	cout<<endl;
}

void pop(){
	struct node *temp;
	if(top==0){
		cout<<"Stack is empty.";
	}
	
	else{
		temp=top;
		cout<<"Deleted is: "<<temp->data;
		top=top->next;
		free(temp);
	}
	cout<<endl;
}

void display(){
	struct node *temp;
	if(top==0){
		cout<<"Stack is empty.";
	}
	
	else{
		temp=top;
		while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
		}
	}
	cout<<endl;
}

int main()
{
  int choice;
  int flag =1;
do
{
  printf("-----------------------------------------");
  printf("\n1: Push");
  printf("\n2: Pop ");
  printf("\n3: Display");
  printf("\n4: Exit");
  printf("\nEnter of your choice: ");
  scanf("%d",&choice);
  
  switch(choice)
  {
   case 1:
		push();
		break;
   case 2:
		pop();
		break;
   case 3:  
   		display();
		 break;
   case 4:
		flag = 0;
		break;
   default:
		printf("\n Invalid Choice");
   }
  }
  while(flag);
 system("pause");
 return 0;
}
