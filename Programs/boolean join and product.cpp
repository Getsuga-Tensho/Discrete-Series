 #include<iostream>
using namespace std;
main(){
	int m,n,p,q,i,j,k;
	int first[5][5],second[5][5],join[5][5],product[5][5],value=0;
	cout<<"Elements of matrices should be either 0 or 1"<<endl;
	cout<<"Enter the number of rows and columns of first matrix"<<endl;
	cin>>m>>n;
	cout<<"Enter elements of first matrix"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>first[i][j];
		}
	}
	
	cout<<"Enter the number of rows and columns of second matrix"<<endl;
	cin>>p>>q;
	cout<<"Enter elements of second matrix"<<endl;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cin>>second[i][j];
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			join[i][j]=second[i][j]||first[i][j];
		}
	}
	
	cout<<"Boolean join of matrices is"<<endl;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<join[i][j]<<"\t";
		}
		cout<<endl;
	}
	
 	for(i=0; i<m;i++)
 	{
        for(j=0;j<q;j++)
        {
            for(k=0;k<p;k++)
			{
			value= value||first[i][k]&&second[k][j];
			}
		product[i][j]=value;
		value=0;
		}
	}

	cout<<endl<<"Boolean product of matrices is"<<endl;
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{	
			cout<<product[i][j]<<"\t";
		}
		cout<<endl;
	}
}
