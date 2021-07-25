#include<iostream>
#include<conio.h>
#include<string.h>
#include <fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	
	char fname[20];
	char rec[80], ch;
	
	cout<<"Enter file name: ";
	cin.get(fname, 20);

	fstream fout(fname, ios::out);

	if(!fout)
	{
		cout<<"Error in opening the file "<<fname;
		getch();
		exit(1);
	}
	cin.get(ch);

	cout<<"\nEnter a line to store in the file:\n";
	cin.get(rec, 80);
	fout<<rec<<"\n";
	cout<<"\nThe entered line stored in the file successfully..!!";
	cout<<"\nPress any key to see...\n";
	getch();
	fout.close();

	fstream fin(fname, ios::in);
	if(!fin)
	{
		cout<<"Error in opening the file "<<fname;
		cout<<"\nPress any key to exit...";
		getch();
		exit(2);
	}

	cin.get(ch);
	fin.get(rec, 80);
	cout<<"\nThe file contains:\n";
	cout<<rec;
	cout<<"\n\nPress any key to exit...\n";
	fin.close();

    getch();
	return 0;
}