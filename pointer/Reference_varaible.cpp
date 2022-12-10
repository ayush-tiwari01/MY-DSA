#include<iostream>
using namespace std;
void update(int& n){
    n++;
}
int main()
{
    int row;
    cin>>row;
    int col;
    cin>>col;
    // int n=5;
    // int& j=n;
    // cout << n << endl;
    // n++;
    // cout<< n <<endl;
    // j++;
    // cout << j << endl;

    // cout << "before" << endl;
    // cout << n << endl;
    // cout << "after" << endl;
    // update(n);
    // cout << n << endl;
    int **arr= new int*[row];
    for(int i=0;i<col;i++){
        arr[i] = new int[col];
    }
    //creation done

    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    //release memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;
}