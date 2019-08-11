#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco e1 = Endereco(1433, "Aristides Lobo", "Centro", "Paraiba", "Rio Tinto", "58297-000");
    Endereco e2 = Endereco();

    e2.setNumero(1841);
    e2.setRua("Valdemar Galdino Naziazeno");
    e2.setBairro("Geisel");
    e2.setEstado("Paraiba");
    e2.setCidade("Joao Pessoa");
    e2.setCep("58075-000");

    Pessoa p1 = Pessoa("Victor Gorgonho", e1, "(83) 98619-5322");
    Pessoa p2 = Pessoa();

    p2.setNome("Jose Victor");
    p2.setEndereco(e2);
    p2.setTelefone("(83) 98831-1750");

    cout << p1.toString() << endl;
    cout << p2.toString();

    return 0;
}
