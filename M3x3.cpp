//additionner les matrices 

void add_Matrices(float A[3][3],float B[3][3],float resultat[3][3]){

   for (int i=0; i< 3; i++)
    for(int j=0; j< 3; j++)
resultat[i][j] = A[i][j] + B[i][j];
}

//soustraction des Matrices
void soust_Matrices(float A[3][3],float B[3][3],float resultat[3][3]){
for (int i=0; i< 3; i++)
  for(int j=0; j< 3; j++)
resultat[i][j] = A[i][j] - B[i][j];
}

//multiplication des Matrices
void mult_Matrices(float A[3][3],float B[3][3],float resultat[3][3]){
for (int i=0; i< 3; i++){
  for(int j=0; j< 3; j++){
resultat[i][j] = 0;
for(int k=0; k< 3; k++){
   resultat[i][j] += A[i][k] * B[k][j]; 
    }
  }
 }

 }
 //trace d'une Matrice
 float tr_Matrices(float A[3][3]){
    float trace = 0;
    for (int i=0; i< 3; i++)
    trace +=A[i][i];
return trace;
 }
 // determinant d'une Matrice
 float deter_Matrices(float A[3][3]){
 return A[0][0] *(A[1][1] *A[2][2] - A[1][2] *A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
}
//transpose d'une Matrice

void transp_Matrices(float A[3][3],float resultat[3][3]){
  for (int i=0; i< 3; i++)
  for(int j=0; j< 3; j++)
resultat[j][i] = A[i][j];
}
//inverse d'une Matrice

bool inver_Matrices(float A[3][3],float resultat[3][3]){
    float det = deter_Matrices(A);
    if (det == 0) 
    return false;
float invdet = 1 / det;
resultat[0][0] = invdet * (A[1][1] *A[2][2] - A[1][2] *A[2][1]);
resultat[0][1]= invdet * (A[0][2] *A[2][1] - A[0][1] *A[2][2]);
resultat[0][2]= invdet * (A[0][1] *A[1][2] - A[0][2] *A[1][1]);
resultat[1][0]= invdet * (A[1][2] *A[2][0] - A[1][0] *A[2][2]);
resultat[1][1]= invdet * (A[0][0] *A[2][2] - A[0][2] *A[2][0]);
resultat[1][2]= invdet * (A[0][2] *A[1][0] - A[0][0] *A[1][2]);
resultat[2][0]= invdet * (A[1][0] *A[2][1] - A[1][1] *A[2][0]);
resultat[2][1]= invdet * (A[0][1] *A[2][0] - A[0][0] *A[2][1]);
resultat[2][2]= invdet * (A[0][0] *A[1][1] - A[0][1] *A[1][0]);
return true;

}
