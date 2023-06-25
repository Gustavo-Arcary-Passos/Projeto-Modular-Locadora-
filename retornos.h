#ifndef RETORNOS
#define RETORNOS

typedef struct no No;

enum{
    ERROR_ITEMJAEXISTE,
    ERROR_NAOALUGADO,
    ERROR_SOLICITARCOMPRA,
    ERROR_MALLOC,
    ERROR_LISTAVAZIA,
    ERROR_NAOENCONTRADO,
    ERROR_INFO,
    ERROR_SEMESTOQUE,
    ERROR_INVALIDOCPF,
    ERROR_LEITURA,
    ERROR_ESCRITA,
    ERROR_ARQUIVONEXISTE,
    ERROR_COMPRA,
    ERROR_SALDONEG,
    SUCCESS_INCLUI,
    SUCCESS_ENCONTRADO,
    SUCCESS_ATUALIZA,
    SUCCESS_DELETE,
    SUCCESS_CPF,
    SUCCESS_DEVOLUCAO,
    SUCCESS_ALUGADO,
    SUCCESS_ESCRITA,
    SUCCESS_LEITURA,
    SUCCESS,
};

#endif