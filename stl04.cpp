#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main(){
  list<int> lista00={12,5,10,9,7,0,-1};
  lista00.push_front(11);
  lista00.push_back(18);
  auto it= std::find(lista00.begin(), lista00.end(),10);
  if(it!= lista00.end()){
    lista00.insert(it,21);
  }
  for(int x: lista00){
    cout << x << '\n';
  }
  return 0;
  
}