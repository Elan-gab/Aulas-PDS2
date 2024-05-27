#ifndef TRANSFERENCIA_BANCARIA
#define TRANSFERENCIA_BANCARIA

#include "Transacao.hpp"

class TransferenciaBancaria : public Transacao {

    public:
        TransferenciaBancaria(double valor);
        bool processarPagamento() override;
};

#endif