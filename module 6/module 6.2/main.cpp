#include<iostream>
#include<cstring>

using namespace std;

char* reverse(char *str,int count)
{
    int length=strlen(str);
    char temp;
if(count==0)
{
    for(int i=0;i<length/2;i++)
    {
        temp=*(str+i);
        *(str+i)=*(str+length-1-i);
        *(str+length-1-i)=temp;
    }
    return str;
}

else
{
    for(int i=0;i<=count/2;i++)
    {
        temp=*(str+i);
        *(str+i)=*(str+count-1-i);
        *(str+count-1-i)=temp;
    }
    return str;
}
}
int main()
{
    int count;
    char *s;
    s=new char[100];
    cout<<"Input string:"<<endl;
    cin.getline(s,100);

    cout<<"Up to how many character of String do you want to reverse OR input Zero(0) for Reverse Whole String: " << endl;
    cin>>count;
    s=reverse(s,count);
    cout<<s<<endl;
    return 0;
}
