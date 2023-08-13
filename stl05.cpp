#include <iostream>
#include <list>

using namespace std;

int main(void){
  list<int> lista00;
  list<int> lista01= {10,20,30};
  list<int> lista02(lista01.begin(), lista01.end());
  list<int> lista03(move(lista01));
  cout << "Tamaño de Lista00"<<lista00.size() << endl;
  cout << "Contenido de Lista02"<< endl;

  for(auto it= lista02.begin(); it !=lista02.end();it++)
    cout<< *it <<endl;

  cout << "Contenido de Lista03"<< endl;

  for(auto it= lista03.begin(); it !=lista03.end();it++)
    cout<< *it <<endl;

  

  return 0;
  
}