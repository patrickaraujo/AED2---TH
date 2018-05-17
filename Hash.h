#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

//	Potências de dois devem ser evitadas
//	deve ser um número primo distante de pequenas potências de dois

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

//	Definição do tipo Hash
typedef struct hash{
    int qtd, TABLE_SIZE;
    struct aluno **itens;
}Hash;

Hash* criaHash(int TABLE_SIZE);
void liberaHash(Hash* ha);
int valorString(char *str);
int insereHash_SemColisao(Hash* ha, struct aluno al);
int buscaHash_SemColisao(Hash* ha, int mat, struct aluno* al);
int insereHash_EnderAberto(Hash* ha, struct aluno al);
int buscaHash_EnderAberto(Hash* ha, int mat, struct aluno* al);

/*
    int chaveDivisao(int chave, int TABLE_SIZE);
    int chaveDobra(int chave, int TABLE_SIZE);
    int chaveMultiplicacao(int chave, int TABLE_SIZE);
    int sondagemLinear(int pos, int i, int TABLE_SIZE);
    int sondagemQuadratica(int pos, int i, int TABLE_SIZE);
    int duploHashing(int pos, int chave, int i, int TABLE_SIZE);
*/

#endif // HASH_H_INCLUDED
