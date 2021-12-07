//circular queue
#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 100
int rear=max-1;
int front=max-1;
int item[max];

void enqueue(){
	int d;
	if(front==(rear+1)%max){
		cout<<"Queue is full.\n";
	}
	else{
		cout<<"Enter data to be inserted: ";
		cin>>d;
		cout<<endl;
		rear=(rear+1)%max;
		item[rear]=d;
	}
}

void delete1(){
	if(rear==front){
		cout<<"Queue is Empty.\n\n";
	}
	else{
		front=(front+1)%max;
		cout<<"Deleted item is: "<<item[front]<<endl<<endl;
	}
}

void display(){
	if(rear==front){
		cout<<"Queue is Empty.\n";
	}
	else{
		cout<<"The items are:\n";
		for(int i=(front+1)%max; i!=rear; i=(i+1)%max){
			cout<<item[i]<<"\t";;
		}
		cout<<item[rear];
		cout<<endl;
	}
	cout<<endl;
}

main(){
	int choice;
	do
{
	printf("MENU\n");
	printf("1: Enqueue \n");
	printf("2: Display \n");
	printf("3: Dequeue \n");
	printf("4: Exit\n");
	printf("Enter of your choice:\t");
	scanf("%d",&choice);
switch(choice)
{
case 1:
		enqueue();
		break;
case 2:
		display();
		break;
case 3:
		delete1();
		break;
case 4:
		exit(0);
		break;
		 
default:
		printf("Invalid Choice\n\n");
}
}while(1);
}
