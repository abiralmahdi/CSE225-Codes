// Allocate a dynamic array where the number of rows and columns and their elements will be taken as inputs from user
#include <iostream>
using namespace std;
int main(){
    int rows, cols;
    cout<< "Enter the number of rows: ";
    cin>>rows;
    cout<< "Enter the number of columns: ";
    cin>>cols;
    int **ptr = new int*[rows];
    for (int i=0; i<rows; i++){
        ptr[i] = new int[cols];
    }
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            int element;
            cout<<"Enter ["<<i<<"]["<<j<<"]: ";
            cin>>element;
            ptr[i][j] = element;
        }
        cout<<"\n";
    }
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            cout<<ptr[i][j]<< " ";
        }
        cout<<"\n";
    }
}
