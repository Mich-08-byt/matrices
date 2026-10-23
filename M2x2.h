#ifndef M2X2_H
#define M2X2_H

void additionner_Matrices(float a[2][2], float b[2][2],
                          float resultat[2][2]);

void soustraction_Matrices(float a[2][2], float b[2][2],
                           float resultat[2][2]);

void multiplication_Matrices(float a[2][2], float b[2][2],
                             float resultat[2][2]);

void trace_Matrices(float a[2][2], float& resultat);

void determinant_Matrices(float a[2][2], float& resultat);

void transpose_Matrices(float a[2][2], float resultat[2][2]);

void inverse_Matrices(float a[2][2], float inva[2][2], float deta);

void afficher_Matrices(float matrice[2][2]);

#endif