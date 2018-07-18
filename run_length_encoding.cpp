#include <iostream>
#include<string>
using namespace std;

int main() {


    char ch[100];
    int i,count=1;


    cin>>ch;

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i+1]==ch[i])
            count++;
        else
        {
            cout<<ch[i]<<count;
            count=1;
        }


    }






	return 0;
}
