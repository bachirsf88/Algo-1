#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int val;
    struct element *suivant;
} element;
// انشاء سلسلة فارغة 
element* creerListe() {
    return NULL; 
}

// تحويل قيم الجدول الي سلسلة
element* chargerListe(int Tab[], int taille, element* liste) {
    for (int i = 0; i < taille; i++) {
        element* nouveau = (element*)malloc(sizeof(element));
        nouveau->val = Tab[i];
        nouveau->suivant = liste;
        liste = nouveau;
    }
    return liste;
}

// اضهار عناصر السلسلة 
void afficherListe(element* L) {
    element* p1 = L;
    while (p1 != NULL) {
        printf("%d -> ", p1->val);
        p1 = p1->suivant;
    }
    printf("NULL\n");
}

// حذف عنصر اخير في السلسلة
element* supprimerEnFin(element* L) {
    element* p2 = L;
    while (p2->suivant->suivant != NULL) {
        p2 = p2->suivant;
    }
    free(p2->suivant);
    p2->suivant = NULL;
    return L;
}

// زيادة عنصر في بداية السلسلة 
element* ajouterEnDebut(element* L, int valeur) {
    element* nouveau = (element*)malloc(sizeof(element));
    nouveau->val = valeur;
    nouveau->suivant = L;
    return nouveau;
}

// افراغ عناصر سلسلة 
void viderListe(element* L) {
    element* p3;
    while (L != NULL) {
        p3 = L;
        L = L->suivant;
        free(p3);
    }
    printf("La liste est vide.\n");
}
int main(){
int Tab[10]={1,3,5,7,8,10,9,11,13,20};
element*liste=creerListe();
element*L=chargerListe(Tab,10,liste);
afficherListe(L);
element* L1=supprimerEnFin(L);
afficherListe(L1);
element* L2=ajouterEnDebut(L1,40);
afficherListe(L2);
viderListe(L2);
return 0;
}
