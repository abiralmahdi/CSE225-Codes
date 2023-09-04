// Allocate a dynamic array where the number of rows and columns and their elements will be taken as inputs from user. Each rows will have different number of columns
#include <iostream>
using namespace std;
int main(){
    int rows;
    cout<< "Enter the number of rows: ";
    cin>>rows;
    int **ptr = new int*[rows];
    int *colCount = new int[rows];
    for (int i=0; i<rows; i++){
        int cols;
        cout<< "Enter the number of columns: ";
        cin>>cols;
        ptr[i] = new int[cols];
        colCount[i] = cols;
    }
    for (int i=0; i<rows; i++){
        for (int j=0; j<colCount[i]; j++){
            int element;
            cout<<"Enter ["<<i<<"]["<<j<<"]: ";
            cin>>element;
            ptr[i][j] = element;
        }
        cout<<"\n";
    }
    for (int i=0; i<rows; i++){
        for (int j=0; j<colCount[i]; j++){
            cout<<ptr[i][j]<< " ";
        }
        cout<<"\n";
    }

    for (int i=0; i<rows; i++){
        delete[] ptr[i];
    }
    delete[] ptr;
}
