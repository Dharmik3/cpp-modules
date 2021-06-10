#include<bits/stdc++.h>
using namespace std;


int* createVector(int s)
{
    int *m=new int[s];
    return m;
}
int main()
{
cout<<"Enter size M you Want to create vector:-";
int size;
cin>>size;
int *ptr =createVector(size);
cout<<"Enter "<<size<<" numbers:"<<endl;
for(int i=0;i<size;i++)
{
    cin>>*(ptr+i);
}
cout<<"\n\nEntered data is:";
for(int i=0;i<size;i++)
cout<<*(ptr+i)<<" ";

cout<<"\n if you wants to delete memory enter 'Y' :";
char choice;
cin>>choice;
if(choice=='y'||choice=='Y'){
        delete []ptr;
        cout<<"\n deleted successfully....\n";
}
}