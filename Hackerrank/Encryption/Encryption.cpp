#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
  string input,output;
  cin>>input;
  int cols=ceil(sqrt(input.size())),rows=floor(sqrt(input.size()));
  while(cols*rows<input.size())
  {
      if(rows<cols)
      {
          rows++;
      }
      else{
        cols++;
      }
  }

  char tab[200][200];
  int temp=0;

  for (int i=0;i<rows;i++)
  {
      for(int k=0;k<cols;k++)
      {
         if(temp<input.size())
          {tab[i][k]=input.at(temp);
          temp++;}
      }

  }

  for (int k=0;k<cols;k++)
  {
      for(int i=0;i<rows   ;i++)
      {
          if(tab[i][k] !=0)
          { output+=tab[i][k];}
      }
       if (k != cols-1 )
       {output+=" ";}
  }
cout<<output;
    return 0;
}


