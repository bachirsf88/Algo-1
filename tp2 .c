#include <stdio.h>
#include <stdlib.h>

// سؤال الاول 
char *ChargerChaine(int N) {
    // حجز مكان في ذاكرة 
    char *chaine = (char *)malloc((N + 1) * sizeof(char));
    printf("Entrez la chaine de caracter ne deppasser pas la taille maximal %d : ", N);
    fgets(chaine, N + 1, stdin); 

    return chaine;
}
// سؤال الثاني 
// نحسب طول شان تاعي 
int Longueur(char *ch) {
    int l = 0;
    while (ch[l] != '\0') {
        l++;
    }
    return l;
}
// سؤال الثالث 
// نعمرو شان تاعي في جدول
void ChargerTab(char *p, char Tab[]) {
    int i = 0;
    while (p[i] != '\0') {
        Tab[i] = p[i];
        i++;
    }
    Tab[i] = '\0'; 
}

// سؤال الرابع 
// نقلب قيم جدول 
void InverserTab(char Tab[], char T[], int m) {
    for (int i = 0; i < m; i++) {
        T[i] = Tab[m - i - 1]; 
    }
    T[m] = '\0'; 
}
// سؤال الخامس
// اضهار جدول
void AfficherTab(char Tab[], int m) {
    for (int i = 0; i < m; i++) {
        printf("%c", Tab[i]);
    }
    printf("\n");
}

int main() {
    int N;
    
   
    printf("Entrez la taille maximale de la chaîne : ");
    scanf("%d", &N);
    getchar(); 
    
  
    char *chaine = ChargerChaine(N);
   
   
        printf("La longueur de la chaîne est : %d\n", Longueur(chaine));
        
      
        char Tab[N + 1];
        ChargerTab(chaine, Tab);
         
         int s =Longueur(Tab);
        
        printf("Le tableau contient : ");
        AfficherTab(Tab,s );
        
       
        char T[N + 1];
        InverserTab(Tab, T, s);
        
        int j=Longueur(T);
        
        printf("Le tableau inversé est : ");
        AfficherTab(T,j);
        
        

  return 0;
}
