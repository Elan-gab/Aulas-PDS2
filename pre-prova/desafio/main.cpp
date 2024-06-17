#include "grafo.hpp"
#include <iostream>

using std::vector;

int main() {

    Grafo *g = new Grafo();
    int i, j;
    vector<vector<int>> v;

    vector<Vertice*> vertices;
    vector<Aresta *> arestas;

    for(i = 0; i < 5; i++)
        vertices.push_back(new Vertice(i));

    arestas.push_back(new Aresta(0, vertices[0], vertices[1], 1));
    arestas.push_back(new Aresta(1, vertices[1], vertices[2], 1));
    arestas.push_back(new Aresta(2, vertices[2], vertices[3], 1));
    arestas.push_back(new Aresta(3, vertices[3], vertices[4], 1));
    arestas.push_back(new Aresta(4, vertices[4], vertices[0], 1));
    arestas.push_back(new Aresta(5, vertices[1], vertices[4], 1));
    arestas.push_back(new Aresta(6, vertices[1], vertices[3], 1));

    g->addVertice(vertices);
    g->addAresta(arestas);

    v = g->getMatrizAdj();

    std::cout << std::endl << "matriz de adjacencia:" << std::endl;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++)
            std::cout << v[i][j] << " ";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    g->printListaAdj();
    std::cout << std::endl;

    if(g->vizinhos(vertices[0], vertices[3]))
        std::cout << "sim v1 v4" << std::endl;
    else
        std::cout << "nao v1 v4" << std::endl;
    
    if(g->vizinhos(vertices[1], vertices[4]))
        std::cout << "sim v2 v5" << std::endl;
    else
        std::cout << "nao v2 v5" << std::endl;

    std::cout << std::endl;

    return 0;
}