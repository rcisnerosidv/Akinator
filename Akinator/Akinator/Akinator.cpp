#include "Akinator.h"

using namespace std;

Akinator:: Akinator(){
  raiz = nullptr;
}

void Akinator::avanzar(){
    pivote(raiz);
}

void Akinator::pivote(Nodo* nodo){
    if(preguntar(nodo)){
        nodo = nodo->si;
        pivote(nodo);
    }
    else{
        nodo = nodo->no;
        pivote(nodo);
    }
}

bool Akinator::preguntar(Nodo* nodo){
    if(nodo->si == nullptr){
        cout << "El personaje que piensas es:  " << nodo->pregunta << endl;
        exit(0);
    }
    else{
        cout << nodo->pregunta << " Si o no? " << endl;
        string res;
        if(cin >> res)
            return (strcasecmp(res.c_str(),"si") == 0);
        else{
            cout << "caracter inválido" << endl;
            preguntar(nodo);
        }
    }
}

void Akinator::insertar(bool respuesta, string pregunta, string s, string n){
    Nodo* nodoSi = nodoMap[s];
    Nodo* nodoNo = nodoMap[n];
    Nodo* nuevoNodo = new Nodo(respuesta, pregunta, nodoSi, nodoNo);
    nodoMap.emplace(pregunta, nuevoNodo);
}

void Akinator::frespuesta(bool respuesta, string pregunta, Nodo* s, Nodo* n){
    Nodo* nuevoNodo = new Nodo(respuesta, pregunta, s, n);
    nodoMap.emplace(pregunta, nuevoNodo);
}

void Akinator::int_raiz(string iniciar){
    raiz = nodoMap[iniciar];
}


