#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int m;
    int countSolid=0;
    int countStripes=0;
    int flag=-1;
    scanf("%d", &n);
    scanf("%d", &m);
    char **N = (char**)malloc(n * sizeof(char *));
    
    for (int i = 0; i < n; i++) {
        N[i] = (char*)malloc(m*sizeof(char));
    }

    for (int i = 0; i < n; i++) {
            scanf("%s", N[i]);

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (flag==-1 && N[i][j]='#'){
              countSolid++;
              countStripes++;
              flag=-flag;  
            }
            if (flag==1 && N[i][j]='.'){
              flag=-flag;  
            }
            printf("%c", N[i][j]);
        }
        printf("\n");
    }


    return 0;
}
/*
    char *sgets(char *line, size_t size) {
        size_t i;
        for (i = 0; i < size - 1; ++i) {
            int ch = fgetc(stdin);
            if (ch == '\n' || ch == EOF) {
                break;
            }
            line[i] = ch;
        }
        line[i] = '\0';
        return line;
    }
    */