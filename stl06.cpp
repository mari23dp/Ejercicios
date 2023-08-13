#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<string> conjunto00{"iphone", "andorid","basic","landline"};
  set<int> conjunto02{1,2,3,4,5};
  set<char>  conjunto01 {'a', 'b','c','d'};
  int i=5;

  for (auto it =conjunto00.begin(); it !=conjunto00.end(); ++it,++i)
    {
      conjunto02.insert('a'+i);
    
    }
  cout <<"Tamño del conjunto:" << conjunto00.size();
  cout<<endl;
  cout <<"Tamño del conjunto:" << conjunto01.size();
  cout<<"\n";
  return 0;
  
}