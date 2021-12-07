#include<iostream>
using namespace std;

//void swap(int *xp, int *yp)  
//{  
//    int temp = *xp;  
//    *xp = *yp;  
//    *yp = temp;  
//}  
   
void bubbleSort(int arr[], int n)  
{  
    int i, j,temp;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1]){
        	temp=arr[j];
        	arr[j]=arr[j+1];
        	arr[j+1]=temp;
		}
//      swap(&arr[j], &arr[j+1]);  :: lookup function in line 4 (much easier)
}   

void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
    
int main()  
{  
    int arr[100];
	int i,n;
    cout<<"How many elements to add?: ";
    cin>>n;
    cout<<"Enter the numbers to sort:\n";
    for(i=0;i<n;i++){
    	cin>>arr[i];
	}
    bubbleSort(arr, n);  
    cout<<"Sorted array: \n";  
    printArray(arr, n);  
    return 0;  
}  
