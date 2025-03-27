#include<iostream>
using namespace std;

class Matrix{
    private:
    int rows,cols;
    int mat[100][100];
    public:
    Matrix(int a,int b){
        rows=a;
        cols=b;
    }
    void setElements(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>mat[i][j];
            }
        }
    }
    
    void PrintMatrix() const{
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    Matrix Transpose() const{
        Matrix transposed(cols,rows);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                transposed.mat[j][i]=mat[i][j];
            }
        }
        return transposed;
    }
};


Matrix Transpose(const Matrix& matrix){
    return matrix.Transpose();
}

int main(){
    int numRows,numCols;
    cin>>numRows>>numCols;
    Matrix matrix(numRows,numCols);
    matrix.setElements();
    cout<<"Original Matrix:\n";
    matrix.PrintMatrix();
    Matrix transposedMatrix=Transpose(matrix);
    cout<<"Transposed Matrix:"<<endl;
    transposedMatrix.PrintMatrix();
    return 0;
}


