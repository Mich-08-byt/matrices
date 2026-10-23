#include <iostream>
#include "M2x2.h"
#include "M3x3.h"

int main() {
    float matricea[2][2];
    float matriceb[2][2];
    float somme[2][2];
    float diff[2][2];
    float mult[2][2];
    float transp[2][2];
    float inva[2][2];

    float matriceA[3][3];
    float matriceB[3][3];
    float som[3][3];
    float soust[3][3];
    float prod[3][3];
    float invA[3][3];

    float trace = 0.0f;
    float det = 0.0f;

    // Saisie de la première matrice 2x2
    std::cout << "Entrez les elements de la premiere matrice 2x2 :\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "Element [" << i + 1 << "][" << j + 1 << "] : ";
            std::cin >> matricea[i][j];
        }
    }

    // Saisie de la deuxième matrice 2x2
    std::cout << "Entrez les elements de la deuxieme matrice 2x2 :\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << "Element [" << i + 1 << "][" << j + 1 << "] : ";
            std::cin >> matriceb[i][j];
        }
    }

    // Addition
    additionner_Matrices(matricea, matriceb, somme);
    std::cout << "\nLa somme des matrices 2x2 :\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << somme[i][j] << "\t";
        }
        std::cout << '\n';
    }

    // Soustraction
    soustraction_Matrices(matricea, matriceb, diff);
    std::cout << "\nLa soustraction des matrices 2x2 :\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << diff[i][j] << "\t";
        }
        std::cout << '\n';
    }

    // Multiplication
    multiplication_Matrices(matricea, matriceb, mult);
    std::cout << "\nLa multiplication des matrices 2x2 :\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << mult[i][j] << "\t";
        }
        std::cout << '\n';
    }

    // Trace
    trace_Matrices(matricea, trace);
    std::cout << "\nLa trace de la matrice A est : " << trace << '\n';

    // Déterminant
    determinant_Matrices(matricea, det);
    std::cout << "Le determinant de la matrice A est : " << det << '\n';

    // Transposée
    transpose_Matrices(matricea, transp);
    std::cout << "\nLa transposee de la matrice A :\n";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << transp[i][j] << "\t";
        }
        std::cout << '\n';
    }

    // Inverse
    if (det != 0.0f) {
        inverse_Matrices(matricea, inva, det);
        std::cout << "\nL'inverse de la matrice A :\n";

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cout << inva[i][j] << "\t";
            }
            std::cout << '\n';
        }
    } else {
        std::cout << "\nLa matrice A n'est pas inversible.\n";
    }

    // Saisie de la première matrice 3x3
    std::cout << "\nEntrez les elements de la premiere matrice 3x3 :\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Element [" << i + 1 << "][" << j + 1 << "] : ";
            std::cin >> matriceA[i][j];
        }
    }

    // Saisie de la deuxième matrice 3x3
    std::cout << "Entrez les elements de la deuxieme matrice 3x3 :\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << "Element [" << i + 1 << "][" << j + 1 << "] : ";
            std::cin >> matriceB[i][j];
        }
    }

    // Addition des matrices 3x3
    add_Matrices(matriceA, matriceB, som);
    std::cout << "\nLa somme des matrices 3x3 :\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << som[i][j] << "\t";
        }
        std::cout << '\n';
    }

    // Soustraction des matrices 3x3
    soust_Matrices(matriceA, matriceB, soust);
    std::cout << "\nLa soustraction des matrices 3x3 :\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << soust[i][j] << "\t";
        }
        std::cout << '\n';
    }

    // Multiplication des matrices 3x3
    mult_Matrices(matriceA, matriceB, prod);
    std::cout << "\nLa multiplication des matrices 3x3 :\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << prod[i][j] << "\t";
        }
        std::cout << '\n';
    }

    // Trace et déterminant de la matrice 3x3
    trace = tr_Matrices(matriceA);
    std::cout << "\nLa trace de la matrice A 3x3 est : " << trace << '\n';

    det = deter_Matrices(matriceA);
    std::cout << "Le determinant de la matrice A 3x3 est : " << det << '\n';

    // Inverse de la matrice 3x3
    if (det != 0.0f) {
        inver_Matrices(matriceA, invA);
        std::cout << "\nL'inverse de la matrice A 3x3 :\n";

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << invA[i][j] << "\t";
            }
            std::cout << '\n';
        }
    } else {
        std::cout << "\nLa matrice A 3x3 n'est pas inversible.\n";
    }

    return 0;
}