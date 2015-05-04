//Quiz 10
//José Luis Enríquez Flores
//A01630238
#include <iostream>
using namespace std;
int n;
float findThrees (int array[])
{
	float div, sum=0;	
	for(int x=0; x<n; x++)
	{
		div=array[x]%3;
		if(div==0)	
		sum= sum + array[x];
	}	
	return sum;
}
int main ()
{
	cout << "Enter numbers to compare " << endl;
	cin >> n;
	int dim, numbers[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the "<<i+1<<"° number"<<endl;
		cin>> dim;
		numbers[i]=dim;
	}
	cout<<"The sum of numbers divisible by three is: "<<findThrees(numbers)<<endl;
	return 0;
}