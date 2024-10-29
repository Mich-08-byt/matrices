#include <iostream>
#include "M2x2.h"
#include "M3x3.h"

int main() {
   
   int i,j;
   float matricea[2][2];
   float matriceb[2][2];
   float matricet[2][2];
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
   float trace;
   float det;
   float resultant;
 //afficher les elements de la premiere matrice2*2
  std::cout <<"entrez les elements de la premiere matrice 2*2:\n ";

 for (int i=0; i< 2; i++){
    for (int j=0; j< 2; j++){
      std::cout <<"element ["<<i+1<<"]["<<j+1<<"]:";

    std::cin >> matricea[i][j];
    } 
    }
 //afficher les elements de la deuxieme matrice2*2
   std::cout <<"entrez les elements de la deuxieme matrice 2*2:\n ";

 for (int i=0; i< 2; i++){
    for (int j=0; j< 2; j++){
      std::cout <<"element ["<<i+1<<"]["<<j+1<<"]:";

    std::cin >> matriceb[i][j];
    }
}
    //affichage du resultat
 additionner_Matrices(matricea,matriceb,somme);
  std::cout <<"la somme des matrices est :\n " <<std::endl;
   for (int i=0; i< 2; i++){
    for (int j=0; j< 2; j++){
    std::cout<< somme[i][j]<<"    ";
    }
std::cout << std::endl << std::endl;

}
soustraction_Matrices(matricea,matriceb,diff);
  std::cout <<"la soustraction des matrices est :\n " <<std::endl;
   for (int i=0; i< 2; i++){
    for (int j=0; j< 2; j++){
    std::cout<< diff[i][j]<<"    ";
    }
std::cout << std::endl << std::endl;

}
 multiplication_Matrices(matricea,matriceb,mult);
  std::cout <<"le mutiplication des matrices est  :\n " <<std::endl;
   for (int i=0; i< 2; i++){
    for (int j=0; j< 2; j++){
    std::cout<< mult[i][j]<<"    ";
    }
std::cout << std::endl;
}
 trace_Matrices(matricea,trace);
std::cout <<"la trace de la matricea est : " << trace  << std::endl;
determinant_Matrices(matricea,det);
std::cout <<"le determinant de la matricea est : " << det  << std::endl;
 transpose_Matrices(matricea,matricet,transp);
std::cout <<"la transpose de la matricea est :\n ";
 for (int i=0; i< 2; i++){
   for (int j=0; j< 2; j++){
    std::cout << transp[i][j] << "   ";
    }
  std::cout << std::endl;
  }
    inverse_Matrices(matricea,inva,det);
    std::cout <<"l'inverse de la matricea est :\n ";
    for (int i=0; i< 2; i++){
      for (int j=0; j< 2; j++){
       std::cout << inva[i][j] << " "; 
       } 
       std::cout << std::endl;
       }
       //afficher les elements de la premiere matrice3*3
 std::cout <<"entrez les elements de la premiere matrice 3*3:\n ";

 for (int i=0; i< 3; i++){
    for (int j=0; j< 3; j++){
      std::cout <<"element ["<<i+1<<"]["<<j+1<<"]:";

    std::cin >> matriceA[i][j];
    }
    }
    //afficher les elements de la deuxieme matrice3*3
for (int i=0; i< 3; i++){
    for (int j=0; j< 3; j++){
      std::cout <<"element ["<<i+1<<"]["<<j+1<<"]:";

    std::cin >> matriceB[i][j];
    }
    }
    add_Matrices(matriceA,matriceB,som);
  std::cout <<"la somme des matrices est :\n " <<std::endl;
   for (int i=0; i< 3; i++){
    for (int j=0; j< 3; j++){
    std::cout<< som[i][j]<<"    ";
    }
std::cout << std::endl << std::endl;

}
soust_Matrices(matriceA,matriceB,soust);
  std::cout <<"la soustraction des matrices est :\n " <<std::endl;
   for (int i=0; i< 3; i++){
    for (int j=0; j< 3; j++){
    std::cout<< soust[i][j]<<"    ";
    }
std::cout << std::endl << std::endl;

}
   mult_Matrices(matriceA,matriceB,prod);
  std::cout <<"le mutiplication des matrices est  :\n " <<std::endl;
   for (int i=0; i< 3; i++){
    for (int j=0; j< 3; j++){
    std::cout<< prod[i][j]<<"    ";
    }
std::cout << std::endl;
}

trace = tr_Matrices(matriceA);
std::cout <<"la trace de la matriceA est : " << trace  << std::endl;
det = deter_Matrices(matriceA);
std::cout <<"le determinant de la matriceA est : " << det  << std::endl;
  inver_Matrices(matriceA,invA);
    std::cout <<"l'inverse de la matriceA est :\n ";
    for (int i=0; i< 3; i++){
      for (int j=0; j< 3; j++){
       std::cout << invA[i][j] << "   "; 
       } 
       std::cout << std::endl;
       }

return 0; 

}