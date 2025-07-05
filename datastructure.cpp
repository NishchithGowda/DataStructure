#include<iostream.h>

#include<conio.h>

inline int cube(int a) //Inline function definition

{

return a*a*a;

}

void main() //Main Function

{

int n;

clrscr( );

cout<<"Enter the input number"<<endl;

cin>>n;

cout<<"Cube of"<<" = "<<cube(n); //Inline function call

getch( );

}
