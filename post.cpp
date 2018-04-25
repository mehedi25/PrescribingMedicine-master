#include<bits/stdc++.h>
using namespace std;
int sum(string str)
{
int i,rslt=0,x,y;
    char u;
    stack <int>stk;
    for(i=0;i<str.size();i++)
    {
        u=str[i];
        if(u>='0'&&u<='9')
        {
stk.push(u-'0');
        }
        else
        {
            x=stk.top();
stk.pop();
            y=stk.top();
stk.pop();
            if(u=='*')x=x*y;
            if(u=='/')x=y/x;
            if(u=='-')x=y-x;
            if(u=='+')x=x*y;
stk.push(x);
        }
    }
    x=stk.top();
stk.pop();
    return x;
}
int main()
{
int rslt;
    string str;
cin>>str;
rslt=sum(str);
cout<<rslt<<endl;
    return 0;

}


