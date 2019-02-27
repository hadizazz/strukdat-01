/*Nama		:Hadiza Cahya Firdaus
NPM			: 140810180042
Tahun		: 2019
Deskripsi	: Swap
*/

#include<iostream>
using namespace std;

void swap(int&a,int&b,int temp){
	a=temp;
	b=a;
	temp=b;
	
}
int main(){
	int x =5;
	int y =4;
	cout<<"x is "<<x<<endl;
	cout<<"y is "<<y<<endl;
	swap(x,y);
	cout<<"After swap :"<<endl;
	cout<<"x is "<<x<<endl;
	cout<<"y is "<<y<<endl;
}
