#include "Akinator.h"

using namespace std;

int main(){
  Akinator ak;
  ak.frespuesta(true, "Mcgree",nullptr,nullptr);
  ak.frespuesta(true, "Moira",nullptr,nullptr);
  ak.frespuesta(true, "Tracer",nullptr,nullptr);
  ak.frespuesta(true, "Widowmaker",nullptr,nullptr);
  ak.frespuesta(true, "Reindhart",nullptr,nullptr);
  ak.insertar(false,"Tu personaje usa pistolas?","McGree","Reindhart"); //ya se respondio la pregunta?, pregunta, si, no
  ak.insertar(false,"Tu personje cura?","Moira","Tracer");
  ak.insertar(false,"Tu personaje es francotirador?","Widowmaker","Tu personaje cura?");
  ak.insertar(false,"Tu personaje es hombre?","Tu personaje usa pistolas?","Tu personaje es francotirador?");
  ak.avanzar(); // avance recursivo
}
