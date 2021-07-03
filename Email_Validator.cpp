#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
bool isEmail(string s){
    int alpha,amp,dot,num,flag;
    alpha=amp=dot=flag=num=0;
    for(int i=0;i<s.length();++i){
        if(s[i]>=97&&s[i]<=120){alpha+=1;}
        else if(s[i]=='@'){amp+=1;}
        else if (s[i]=='.'){dot +=1;}
        else if(s[i]>=48&&s[i]<=57){num+=1;}
        else{flag=1;}
        
    }
    if(flag!=1&&amp==1&&dot==1&&(num>=1||alpha>=1))
    return true;
return false;
}
int main()
{
    bool b;
    b= isEmail("a780@gmail.com");
    b==1?cout<<"Email ID is valid!"<<endl:cout<<"Email ID needs to match our criterion!"<<endl;
    return 0;
}
