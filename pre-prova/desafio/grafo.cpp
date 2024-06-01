#include "grafo.hpp"
#include <iostream>

using namespace std;

Vertice::Vertice(int id) : id(id) {}

Aresta::Aresta(int id, Vertice *v1, Vertice *v2, int custo) 
: id(id), custo(custo) {

    aresta = make_pair(v1, v2);
}

Grafo::Grafo() {}

void Grafo::addAresta(Aresta *a) {

    arestas.push_back(a);
}

void Grafo::addAresta(vector<Aresta*> va) {

    for(Aresta *a : va)
        arestas.push_back(a);
}

void Grafo::addVertice(Vertice *v) {

    vertices.push_back(v);
}

void Grafo::addVertice(vector<Vertice*> vv) {

    for(Vertice *v : vv)
        vertices.push_back(v);
}

vector<vector<int>> Grafo::getMatrizAdj() {

    vector<vector<int>> m;

    m.resize(vertices.size(), vector<int>(vertices.size()));

    for(Aresta *aresta : arestas)
        m[aresta->aresta.first->id][aresta->aresta.second->id] = aresta->custo;

    #ifdef ARESTA_BILATERAL

    for(Aresta *aresta : arestas)
        m[aresta->aresta.second->id][aresta->aresta.first->id] = aresta->custo;

    #endif

    return m;
}

void Grafo::printListaAdj() {

    vector<vector<int>> m = getMatrizAdj();
    int i, j;
    cout << "vertice\tlista de adjacencia" << endl;

    for(i = 0; i < vertices.size(); i++) {

        cout << i + 1 << "\t";
        for(j = 0; j < vertices.size(); j++)
            if(m[i][j] > 0)
                cout << j + 1 << ", ";
        cout << "\b\b \b\b" << endl;
    }
}

bool Grafo::vizinhos(Vertice *v1, Vertice *v2) {

    vector<vector<int>> m = getMatrizAdj();

    if(m[v1->id][v2->id] > 0)
        return true;
    else
        return false;
}

Vertice::~Vertice() {}
Aresta::~Aresta() {}
Grafo::~Grafo() {}