#include <stdio.h>

int main() {
    int i, j;
    char D[5][5] = {
        {'1', '2', '3', '4', '5'},
        {'7', 'a', 'c', '8', 'd'},
        {'c', '9', '4', 'z', '8'},
        {'5', '6', 'p', 'n', '3'},
        {'2', '9', 't', 'm', 'k'}        
    };
    // first q
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c ", D[i][j]);
        }
        printf("\n");
    }
  printf("\n");
  //the second q
    for (i = 0; i < 5; i += 2) {
        for (j = 0; j < 5; j++) {
            printf("%c ", D[i][j]);
        }
        printf("\n");
    }
    //the therd q
 for (i = 0; i < 5; i += 2) {
        for (j = 0; j < 5; j=+2) {
            printf("%c ", D[i][j]);
        }
        printf("\n");
    }
    /////////////////////////////////
    printf("affiche le diagonal:\n");
    for ( i = 0; i < 5; i++) {
        printf("%c ", D[i][i]); 
    }
    printf("\n");
/////////////////
printf("affiche le dexiem diagonal:\n");
    for ( i = 0; i < 5; i++) {
        printf("%c ", D[i][5 - i - 1]);
    }
    printf("\n");
    return 0;
}
   








  ////////////////////// exercice 2
  #include <stdio.h>

int main() {
    int i,j,s,t;
    int m[20][20];
     printf("give the size of your matrix = ");
    scanf("%d",&s);
    printf("enter the values of your matrix.");
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    printf("the first matrix : ");
    printf("\n");
    for ( i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("the secod matrix :");
    printf("\n");
    for ( i = 0; i < s; i++) {
        for (j = i + 1; j < s; j++) {
             t = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = t;
        }
    }
    for ( i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
  
