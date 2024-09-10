#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int age;
	cout<<"enter your age:";
	cin>>age;
	if(age>=18)
	{
		cout<<"you are eligible for voting:";
	}
	else
	{
		cout<<"you are not eligible for voting:";
	}
	getch();
	return 0;
}
