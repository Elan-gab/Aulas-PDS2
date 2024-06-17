#ifndef EXCEPTIONS
#define EXCEPTIONS

#include <stdexcept>

class InvalidCPF : public std::exception {
    private:
        std::string msg;
    public:
        InvalidCPF(std::string msg);
        std::string what();
};

class InvalidAccess : public std::exception {

    private:
        std::string msg;
    public:
        InvalidAccess(std::string msg);
        std::string what();
};

#endif