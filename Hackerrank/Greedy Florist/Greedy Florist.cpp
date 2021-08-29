#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int inputFlowers,inputFriends,output=0;
  vector <int> V;
cin>>inputFlowers;
cin>>inputFriends;
for (int i=0;i<inputFlowers;i++)
{   int temp;
    cin>>temp;
    V.push_back(temp);}

sort(V.begin(), V.end());

int x=0,temp=0;

for(int j=V.size()-1;j>=0;j--)
{
 
  output+=V[j]*(1+x);
  temp++;
  if (temp%inputFriends==0){x++;temp=0;}
}

cout<<output;
    return 0;
}