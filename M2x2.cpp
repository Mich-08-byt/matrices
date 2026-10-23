#include <iostream>

// Additionner deux matrices 2x2
void additionner_Matrices(float a[2][2], float b[2][2],
                          float resultat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultat[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Soustraction de deux matrices 2x2
void soustraction_Matrices(float a[2][2], float b[2][2],
                           float resultat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultat[i][j] = a[i][j] - b[i][j];
        }
    }
}

// Multiplication de deux matrices 2x2
void multiplication_Matrices(float a[2][2], float b[2][2],
                             float resultat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultat[i][j] = 0;

            for (int k = 0; k < 2; k++) {
                resultat[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Trace d'une matrice 2x2
void trace_Matrices(float a[2][2], float& resultat) {
    resultat = a[0][0] + a[1][1];
}

// Déterminant d'une matrice 2x2
void determinant_Matrices(float a[2][2], float& resultat) {
    resultat = a[0][0] * a[1][1]
             - a[0][1] * a[1][0];
}

// Transposée d'une matrice 2x2
void transpose_Matrices(float a[2][2], float resultat[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultat[i][j] = a[j][i];
        }
    }
}

// Inverse d'une matrice 2x2
void inverse_Matrices(float a[2][2], float inva[2][2], float deta) {
    if (deta == 0) {
        std::cout << "La matrice n'est pas inversible."
                  << std::endl;
        return;
    }

    float invdeta = 1.0f / deta;

    inva[0][0] = invdeta * a[1][1];
    inva[0][1] = -invdeta * a[0][1];
    inva[1][0] = -invdeta * a[1][0];
    inva[1][1] = invdeta * a[0][0];
}