#include<iostream>
#include<iomanip>
using namespace std;
main(){
	int i,j;
	char tt[4][5]={{'T','T'},{'T','F'},{'F','T'},{'F','F'}};
	cout<<"p"<<setw(16)<<"q"<<setw(18)<<"p->q"<<setw(19)<<"p^(p->q)"<<setw(16)<<"p^(p->q)->q"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;;
	for(i=0;i<4;i++){
		if((tt[i][0]=='T' && tt[i][1]=='T')||(tt[i][0]=='F' && tt[i][1]=='F')||(tt[i][0]=='F' && tt[i][1]=='T'))
			tt[i][2]='T';
		else
			tt[i][2]='F';
	}
	
	for(i=0;i<4;i++){
		if(tt[i][0]=='T' && tt[i][2]=='T')
			tt[i][3]='T';
		else
			tt[i][3]='F';
	}
	
	for(i=0;i<4;i++){
	if((tt[i][1]=='T' && tt[i][3]=='T')||(tt[i][1]=='F' && tt[i][3]=='F')||(tt[i][3]=='F' && tt[i][1]=='T'))
			tt[i][4]='T';
		else
			tt[i][4]='F';
	}
	
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			cout<<tt[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	cout<<"-----------------------------------------------------------------------"<<endl;;
		if(tt[0][4]=='T'&&tt[1][4]=='T'&&tt[2][4]=='T'&&tt[3][4]=='T')
			cout<<"The compound preposition is a valid argument";
		else
			cout<<endl<<"The compound preposition is an invalid argument";	
	
}
