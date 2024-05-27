#ifndef TRANSACAO
#define TRANSACAO

class Transacao {

    public:
        Transacao();
        virtual bool processarPagamento();
};

#endif