//by badol
//1-11-17
#include<bits/stdc++.h>
using namespace std;
void TofHANOI(int n,char A,char B,char C)
{
    if(n==1)
    {
cout<<"move: "<<A<<" -> "<<C<<endl;
        return;
    }
TofHANOI(n-1,A,C,B);
cout<<"move: "<<A<<" -> "<<C<<endl;
TofHANOI(n-1,B,A,C);
    return;
}

int main()
{
int n;
cout<<"Enter number of blocks : ";
cin>>n;
TofHANOI(n,'A','B','C');

    return 0;
}



