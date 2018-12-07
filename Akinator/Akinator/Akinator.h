#ifdef _MSC_VER 
//not #if defined(_WIN32) || defined(_WIN64) because we have strncasecmp in mingw
#define strncasecmp _strnicmp
#define strcasecmp _stricmp
#endif
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Akinator{
 private:
 
    struct Nodo{
      bool respuesta;
      string pregunta;
      Nodo* si;
      Nodo* no;
      
      Nodo(bool r, string p, Nodo* s, Nodo* n) : respuesta(r), pregunta(p), si(s), no(n){}
    };

    Nodo* raiz;
    
    unordered_map<string, Nodo*> nodoMap;
    
    void pivote(Nodo* root);
 
 public:

    Akinator();

    bool preguntar(Nodo* root);

    void avanzar();
    
    void frespuesta(bool respuesta, string pregunta, Nodo* s, Nodo* n);

    void insertar(bool answer, string question, string y, string n);
    
    void int_raiz(string iniciar);
};
