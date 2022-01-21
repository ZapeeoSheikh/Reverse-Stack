
#include<iostream>
# define n 5
using namespace std;

//void push (){

 

int main()
{
 
 int stack [ n ]; 
 int top = -1; 
 
	
	int x ,i; 
//	int top = -1;
cout <<" Enter a Number in Stack : ";
	for ( i = 0 ; i <= n-1 ; i++){
	cin >> stack[i]; 
	top++;
	if ( top == n ){
		cout << " Stack OverFlow ";
	} 
	}
	
		cout <<" Stack members : ";
		for ( i = 0 ; i <= n-1 ; i++){
	cout << stack[top]<<" "; 
	top--;
	if ( top == -1 ){
		cout << " Stack empty ";
	} 
	}
	
	
    return 0;
    // return 0 for sucessfull termination of the program

}
