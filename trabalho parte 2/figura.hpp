#include <vector>
#include <string>

class Figura {
    protected:
        std::vector<int> arestas;
        std::vector<int> faces;

    public:
        std::string nome;
    
    public:
        virtual float getArea() = 0;
        virtual float getVolume() = 0;
};

class Figura2D : public Figura {

    public:
        virtual float getArea() override;
};

class Figura3D : public Figura {

    public:
        virtual float getVolume() override;
};

class Quadrado : Figura2D {

    
};

class Cubo : Figura3D {


};