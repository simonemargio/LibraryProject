#ifndef PROGETTOBIBLIOTECA_ABR_H
#define PROGETTOBIBLIOTECA_ABR_H

struct struttura_elemento_albero{
    void *datiBibliotecaPtr;
    struct struttura_elemento_albero *sxPtr;
    struct struttura_elemento_albero *dxPtr;
};

typedef struct struttura_elemento_albero *Albero;

void F_alloca_struttura_albero(Albero *T);
void F_inserisci_elemento_abr(Albero *T,void *LibroOStudente, int tipoStruttura);



#endif //PROGETTOBIBLIOTECA_ABR_H
