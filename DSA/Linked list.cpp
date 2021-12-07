#include<iostream>
using namespace std;
#include<stdlib.h>
int count=0;
struct node{
	int data;
	struct node *next;
};

typedef struct node nodetype;  
nodetype *start=NULL;

int insbeg(){
	struct node *nnode;
	nnode=(nodetype*)malloc(sizeof(nodetype));
	int item;
	cout<<"Enter data to insert: ";
	cin>>item;
	nnode->data=item;
	
	if(start==NULL){
		nnode->next=NULL;
		start=nnode;
	}
	else{
		nnode->next=start;
		start=nnode;
	}
	count++;
	return 0;
}

int insend(){
	struct node *nnode,*temp;
	nnode=(nodetype*)malloc(sizeof(nodetype));
	int item;
	cout<<"Enter data to insert: ";
	cin>>item;
	nnode->data=item;
	
	if(start==NULL){
		start=nnode;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=nnode;
		nnode->next=NULL;
	}
	count++;
	return 0;
}

//int inspos(){
//		int pos;
//		cout<<"Enter the position to add node: ";
//		cin>>pos;
//		struct node *temp;
//		temp=start;
//		if(pos>count){
//			cout<<"Wrong position"<<endl;
//		}
//		
//		else{
//			for(int i=1; i<pos-1; i++){
//				temp=temp->next;
//			}
//			struct node *nnode;
//			cout<<"Enter the data:";
//			int dat;
//			cin>>dat;
//			nnode->data=dat;
//			nnode->next=temp->next;
//			temp->next=nnode;
//			count++;
//	 }
//		return 0;
//}
		
int display(){
	if(start==NULL){
		cout<<"List is empty"<<endl;
	}
	
	else{
		struct node *temp;
		temp=start;
		while(temp!=NULL){
			cout<<temp->data<<"\n";
			temp=temp->next;
		}
	}
	return 0;
}

int delb(){
	struct node *temp;
	if(start==NULL){
		cout<<"List is empty."<<endl;
	}
	
	else{
		temp=start;
		cout<<"Deleted data is: "<<start->data<<endl;
		start=start->next;
		free(temp);
		count--;
	}
}

int dele(){
	struct node *temp,*hold;
	if(start==NULL){
		cout<<"List is empty."<<endl;
	}
	
	else{
		temp=start;
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		hold=temp->next;
		cout<<"Deleted data is:"<<hold->data<<endl;
		free(hold);
		temp->next=NULL;
		count--;
	}
	return 0;
}

int delpos(){
		int pos;
		cout<<"Enter the position to add node: ";
		cin>>pos;
		struct node *temp,*hold;
		temp=start;
		if(pos>count){
			cout<<"Wrong position to delete."<<endl;
		}
		
		else{
			for(int i=1; i<pos-1; i++){
				temp=temp->next;
			}
			hold=temp->next;
			temp->next=hold->next;
			cout<<"Deleted item: "<<hold->data<<endl;
			free(hold);
			count--;
		}
		return 0;
}

int main()
{
  int choice;
  int flag =1;
do
{
  printf("-----------------------------------------");
  printf("\n1: Insert at Begnning ");
  printf("\n2: Insert at End ");
//  printf("\n3: Insert at position");
  printf("\n4: Delete at beginning");
  printf("\n5: Delete at end");
  printf("\n6: Delete at given position");
  printf("\n7: Display all nodes ");
  printf("\n8: Exit");
  printf("\nEnter of your choice: ");
  scanf("%d",&choice);
  
  switch(choice)
  {
   case 1:
		insbeg();
		break;
   case 2:
		insend();
		break;
//   case 3:  
//   		inspos();
//		 break;
   case 4:
		delb();
		break;
   case 5: 
		dele();
		break;
   case 6: 
		delpos();
		break;
   case 7:
   		display();
		break;
   case 8:
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
