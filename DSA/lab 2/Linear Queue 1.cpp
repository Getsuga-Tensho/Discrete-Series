#include<iostream>
using namespace std;
#define max 100
class Queue{
	public:
		int item[max];
		int rear;
		int front;
		
		Queue(){
			rear=-1;
			front=0;
		}
		
		void Enqueue(){
			int d;
			if(rear==max-1){
				cout<<"Queue Overflow\n";
			}
			else{
				cout<<"Enter the data to insert: ";
				cin>>d;
				rear++;
				item[rear]=d;
			}
		}
		
		void Dequeue(){
			int d;
			if(rear<front){
				cout<<"Queue is underflow.";
			}
			
			else{
				d=item[front];
				front++;
				cout<<"Deleted item is: "<<d;
			}
			cout<<"\n";
		}
		
		void display(){
			int i;
			if(rear<front){
				cout<<"Queue is empty";
			}
			for(i=front; i<=rear; i++){
				cout<<item[i]<<"\t";
			}
			cout<<"\n";
		}
};

main(){
	Queue p;
	int ch;
		do{	//infinite loop, will end when choice will be 4
		printf("*** Queue Menu ***");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\nEnter your choice(1-4):");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: p.Enqueue();
					break;
			case 2: p.Dequeue();
					break;
			case 3: p.display();
					break;
			case 4: exit(0);
			
			default: printf("Wrong Choice!!\n");
		}
		printf("\n");
	}while(ch<=4);
}
