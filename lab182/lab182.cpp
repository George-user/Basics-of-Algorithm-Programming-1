#include <stdio.h>

int main() {
    FILE* fileF;
    FILE* fileG;
    int num;

     fopen_s(&fileF, "f.txt", "r");
     fopen_s(&fileG, "g.txt", "w");

     if(fileF != NULL && fileG != NULL) {

         for (int i = 0; i < 5; i++) {
             fscanf_s(fileF, "%d", &num);
             fprintf(fileG, "%d\n", num);
         }

         fseek(fileF, 30, SEEK_SET);

         for (int i = 0; i < 5; i++) {
             fscanf_s(fileF, "%d", &num);
             fprintf(fileG, "%d\n", num);
         }

         fseek(fileF, 15, SEEK_SET);

         for (int i = 0; i < 5; i++) {
             fscanf_s(fileF, "%d", &num);
             fprintf(fileG, "%d\n", num);
         }

         fseek(fileF, -20, SEEK_END);

         for (int i = 0; i < 5; i++) {
             fscanf_s(fileF, "%d", &num);
             fprintf(fileG, "%d\n", num);
         }

         fclose(fileF);
         fclose(fileG);
     }
     else {
         printf("Error\n");
     }

    return 0;
}

