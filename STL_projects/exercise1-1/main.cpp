#include <iostream>

using namespace std;

template <class T>
void bubbleSort(T *arr, T n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template <class T>
void printArray(T arr[], T size) {
    for (int i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << std::endl;
}

int main()
{
    int n;
    cout << "Vnesi golemina na int niza" << endl;
    cin>>n;
    int array[n];
    cout<<"Vnesi elementi"<<endl;
    for(int i=0; i<n; i++) {
        cin>>array[i];
    }
    cout<<"Sortirano:"<<endl;
    bubbleSort(array, n);
    printArray(array, n);

    cout<<"Vnesi golemina na double nizata"<<endl;
    double m;
    cin>>m;
    double array2[(int)m];
    cout<<"Vnesi elementi"<<endl;
    for(int i=0; i<m; i++) {
        cin>>array2[i];
    }
    cout<<"Sortirano:"<<endl;
    bubbleSort(array2, m);
    printArray(array2, m);
    return 0;
}
