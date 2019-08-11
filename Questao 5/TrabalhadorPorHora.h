#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(std::string nome, double valorDaHora, int horasSemanais);

        double getValorDaHora();
        void setValorDaHora(double valorDaHora);

        double calcularPagamentoSemanal(int horas);
    private:
        double valorDaHora;
};

#endif // TRABALHADORPORHORA_H
