#ifndef GRAFO
#define GRAFO

#define ARESTA_BILATERAL

#include <vector>
#include <utility>

class Vertice {
    public:
        int id;
    public:
        Vertice(int id);
        ~Vertice();
};

class Aresta {
    public:
        int id;
        int custo;
        std::pair<Vertice*, Vertice*> aresta;
    public:
        Aresta(int id, Vertice *v1, Vertice *v2, int custo);
        ~Aresta();
};

class Grafo {
    private:
        std::vector<Vertice*> vertices;
        std::vector<Aresta*> arestas;
    public:
        Grafo();
        ~Grafo();
        void addAresta(Aresta *a);
        void addAresta(std::vector<Aresta*> va);
        void addVertice(Vertice *v);
        void addVertice(std::vector<Vertice*> vv);
        std::vector<std::vector<int>> getMatrizAdj();
        void printListaAdj();
        bool vizinhos(Vertice *v1, Vertice *v2);
};

#endif