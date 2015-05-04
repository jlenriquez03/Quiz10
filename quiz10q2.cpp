#include <iostream>
using namespace std;
int x;
long double dotProduct (int v1[], int v2[])
{
float dot, sum=0;   
    for(int i=0; i<x; i++)
	{
    dot=v1[i]*v2[i];
    sum= sum + dot;
    }   
return sum;
}
int main (){
cout << "Numbers for vectors " << endl;
cin >> x;
int n, v1[x], v2[x];
for(int i=0; i<x; i++){
cout<<"Introduce the "<<i+1<<"° number of first vector:"<<endl;
cin>> n;
v1[i]=n;
}
for(int i=0; i<x; i++){
cout<<"Enter the "<<i+1<<"° number of second vector:"<<endl;
cin>> n;
v2[i]=n;
}
cout<<"Dot product: "<<dotProduct(v1, v2)<<endl;
return 0;
}