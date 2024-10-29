# include <iostream>
//additionner les matrices 
void additionner_Matrices(float a[2][2],float b[2][2],float resultat[2][2]){


   for (int i=0; i< 2; i++){
    }
for(int j=0; j< 2; j++){
resultat[0][0]=a[0][0]+b[0][0];
 resultat[0][1]= a[0][1]+b[0][1];
  resultat[1][0]= a[1][0]+b[1][0];
   resultat[1][1]= a[1][1]+b[1][1];
            }
}
//soustraction des Matrices
void soustraction_Matrices(float a[2][2],float b[2][2],float resultat[2][2]){

 for (int i=0; i< 2; i++){
  }
  for(int j=0; j< 2; j++){
   resultat[0][0]=a[0][0]-b[0][0];
 resultat[0][1]= a[0][1]-b[0][1];
  resultat[1][0]= a[1][0]-b[1][0];
   resultat[1][1]= a[1][1]-b[1][1];
  } 
}
//multiplication des Matrices
void multiplication_Matrices(float a[2][2],float b[2][2],float resultat[2][2]){
 for (int i=0; i< 2; i++){
  }
    for(int j=0; j< 2; j++){
     resultat[0][0]= a[0][0]*b[0][0] + a[0][1]*b[1][0] ;
     resultat[0][1]= a[0][0]*b[0][1] + a[0][1]*b[1][1] ;
     resultat[1][0]= a[1][0]*b[0][0] + a[1][1]*b[1][0] ;
     resultat[1][1]= a[1][0]*b[0][1] + a[1][1]*b[1][1] ;
     }
     }
     //trace d'une Matrice
     void trace_Matrices(float a[2][2],float resultat){
      resultat= a[0][0] +a[1][1];
      }

     // determinant d'une Matrice
     void determinant_Matrices(float a[2][2],float resultat){
     resultat= ( a[0][0] * a[1][1]-
      a[0][1] * a[1][0]);
     }
     //transpose d'une Matrice
     
    void transpose_Matrices(float a[2][2], float t[2][2], float resultat[2][2]){
      t[0][0] = a[0][0];
      t[0][1] = a[1][0]; 
      t[1][0] = a[0][1]; 
      t[1][1] = a[1][1];
    }
    //inverse d'une Matrice
    void inverse_Matrices( float a[2][2],float inva[2][2],float deta){
      if (deta == 0){
        std::cout <<"la matricea n'est pas inversible."<< std::endl;
      }
      else {
      float invdeta = 1 / deta;
      inva[0][0] = invdeta * a[1][1];
      inva[0][1] = -invdeta * a[0][1];
      inva[1][0] = -invdeta * a[1][0];
      inva[1][1] = invdeta * a[0][0];
     }
    }
      