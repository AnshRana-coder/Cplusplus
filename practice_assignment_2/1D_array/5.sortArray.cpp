#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 
    
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < n ; i++) { 
        for (int j = i+1; j < n ; j++) { 
            if (arr[i] > arr[j]) { 
                int x=0;
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }
        }
    }
    for (int i = 0; i < n; i++) {
      
        cout << arr[i];
    }

    return 0;
}
