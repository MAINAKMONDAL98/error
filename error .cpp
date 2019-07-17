#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
int cs;
cin>>cs;
for(int R=0;R<cs;R++){

int po[5];
float valu;
string str1;
string temp1;
getline(cin,str1);
int x2=-1;
stringstream ss(str1);
while(getline(ss,temp1, ' '))
{	  x2++;
      stringstream stream(temp1);
      if(stream >> valu)
{
		po[x2]=valu;
        //cout<<po[x2]<<endl;;
		}
      else 
        cout<<temp1<<std::endl;
}
//cout<<p[4]+1<<endl;
//cin >> n>>r>>c>>sr>>sc;
int n=po[0];
int r=po[1];
int sr=po[3];
int sc=po[4];
cout<<n<<sr<<endl;
return 0;}
}
