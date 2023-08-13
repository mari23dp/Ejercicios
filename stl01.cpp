#include <iostream>
using namespace std;

template<class T, int element> class Exp{
public:
      T a [ element];
void put (){
  int x = 1;
  for (int j=0; j<element;j++)
    {
      a[j] =x;
      x++;
    }
}
  void print (){
    for (int x=6; x<element;x++)
      cout<< a[x]<<""<<"\n";
    cout << "\n.....FIN! \n";    
  }
};

int main(){
  Exp<int,16> objeto;
  objeto.put();
  objeto.print();
  return 0;
}