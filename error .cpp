//n,r,c,sr,sc,new
#include <iostream> 
#include <sstream>
#include <string>
using namespace std;
int main() {
int po[5];
float valu;
std::string str1;
std::string temp1;
int cs;
cin>>cs;
for(int R=0;R<=cs;R++){
	
cout<<"I am R"<<R<<endl;

std::getline(std::cin,str1);
int x2=-1;
std::stringstream ss(str1);
//cout<<"hello";
while(getline(ss,temp1, ' '))
{x2++;
      std::stringstream stream(temp1);
      if(stream >> valu)
{

        //std::cout<<val<<std::endl;
        //std::cout<<val+1<<std::endl;
		po[x2]=valu;
        cout<<valu<<endl;
		}
      else 
        std::cout<<temp1<<std::endl;
}
int n=po[0];
int r=po[1];
int c=po[2];
int sr=po[3];
int sc=po[4];
cout<<n<<sr<<endl;

}
//cout<<"hello";
}
