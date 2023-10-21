#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int row;
    int col;
    int num;

    cout << "row = ";
    cin >> row;

    cout <<"col = ";
    cin >> col;

    vector<vector<int>> matrix1(col);
    vector<vector<int>> matrix2(col);

    for(int i=0; i<col; i++){
        matrix1[i] = vector<int>(row);
        matrix2[i] = vector<int>(row);
    }

    cout << "matrix1 input : \n";
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
                cin >> num;
                matrix1[i][j] = num;
        }
    }
    cout << "matrix2 input : \n";
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
                cin >> num;
                matrix2[i][j] = num;
        }
    }

    cout << "matrix1 + matrix2 result : \n";
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
                cout << matrix1[i][j] + matrix2[i][j] << " ";
        }
        cout << endl;
    }
}