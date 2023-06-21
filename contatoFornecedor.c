#include "contatoFornecedor.h"
//#include "xml.h"

int enviaJogo(char nome_jogo[50], char nome_arq[55]){
    // envia a solicitação em XML para o fornecedor
    int enviar;

    enviar = gravaXML(nome_arq, nome_jogo);

    if(enviar == 0){
        return SUCESS;
    } 
    else if(enviar == -1){
        return ERROR_ARQUIVONEXISTE;
    } 
}

int recebeJogo(char nome_arq[55]){
    char* leitura;
    char* nomeJogo;
    char* precoString;
    int preco;

    // considerando que a leitura vai ser feita da maneira preco;jogo
    leitura = leXML(nome_arq);

    // considerando que o preco sera no formato XXX.XX
    strncpy(precoString, leitura, 6);
    precoString[7] = '\0';
    preco = atoi(precoString);

    // pulando os caracteres de jogo e o ;
    strcpy(nomeJogo,leitura + 7);

    if(preco < 0){
        return ERROR_LEITURA;
    } else {
        compraJogo(nomeJogo, preco);
        return SUCESS;
    }
}

