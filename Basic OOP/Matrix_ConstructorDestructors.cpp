#include<iostream>
using namespace std;

class Matrix{
  public:
  int n;
  int** matrix;
  
  Matrix(int size){
      n=size;
      matrix=new int*[n];
      for(int i=0;i<n;i++){
          matrix[i]=new int[n];
      }
  }
  
  ~Matrix(){
      for(int i=0;i<n;i++){
          delete[] matrix[i];
      }
      delete[] matrix;
  }
  
  void readMatrix(){
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cin>>matrix[i][j];
          }
      }
  }
  
  void displayMatrix(){
      cout<<"Matrix:"<<endl;
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cout<<matrix[i][j];
              if(j<n-1)cout<<" ";
          }
          cout<<endl;
      }
  }
  
  int determinant(){
      return determinantOfSubMatrix(matrix,n);
  }
  
  private:
  int determinantOfSubMatrix(int** subMatrix,int subSize){
      if(subSize==1){
          return subMatrix[0][0];
      }
      if(subSize==2){
          return( subMatrix[0][0]*subMatrix[1][1])-(subMatrix[0][1]*subMatrix[1][0]);
      }
      
      int det=0;
      int sign=1;
      
      for(int f=0;f<subSize;f++){
          int** temp=new int*[subSize-1];
          for(int i=0;i<subSize-1;i++){
              temp[i]=new int[subSize-1];
          }
          
          for(int i=0;i<subSize;i++){
              temp[i]=new int[subSize-1];
          }
          
          for(int i=1;i<subSize;i++){
              int subj=0;
              for(int j=0;j<subSize;j++){
                  if(j==f) continue;
                  temp[i-1][subj]=subMatrix[i][j];
                  subj++;
              }
          }
          det+=sign*subMatrix[0][f]*determinantOfSubMatrix(temp,subSize-1);
          sign=-sign;
          for(int i=0;i<subSize-1;i++){
            delete[] temp[i];
          }
          delete[] temp;
      }
      return det;
    }
};

int main(){
    int n;
    cin>>n;
    Matrix mat(n);
    mat.readMatrix();
    mat.displayMatrix();
    cout<<"Determinant: "<<mat.determinant()<<endl;
    return 0;
}