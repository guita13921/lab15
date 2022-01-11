#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool x[][N]){
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cout << x[i][j] << " ";        
        }
    cout << endl;
    }
}    

void inputMatrix(double a[][N]){
    for(int i = 0; i < N; i++){
        cout << "Row " << i+1 << ": ";
        for(int j = 0; j < N; j++){
            cin >> a[i][j];
        }
    }
}

void findLocalMax(const double b[][N], bool c[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == N-1 || i == 0 || j == 0 || j == N-1){
                c[i][j] = 0;
            }if(b[i+1][j+1]>=b[i+1][j] and b[i+1][j+1] >= b[i][j+1] and b[i+1][j+1] >= b[i+2][j+1] and b[i+1][j+1] >= b[i+1][j+2]){
                c[i+1][j+1] = 1;
            }else{
                c[i+1][j+1] = 0;
            }
        }
    }
}