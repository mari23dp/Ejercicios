#include <bits/stdc++.h>
using namespace std;
void tool_cola(queue <string> objeto);

int main(){
  // create a queue of string
  queue <string> animales;
  animales.push("Gato");
  animales.push("Hormiga");
  animales.push("Conejo");
  animales.push("Perro");

  cout <<"\n Cola inicial: \n";
  tool_cola(animales);
  return 0;
}

void tool_cola(queue <string> objeto)
{
  cout <<"\n Tamaño de la cola: \n" << objeto.size()<<"\n";
  while (!objeto.empty())
    {
      cout<<objeto.front() <<",";
      objeto.pop();
    }
  cout <<endl;
}
  