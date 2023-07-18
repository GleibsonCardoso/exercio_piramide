#include <iostream>

using namespace std;

int main() {

int n;
cout << "Digite o numero de linhas:  ";
cin >> n;

for (int i=1; i<=n; i++){
    for (int j=n; j > 0; j--){
      if (i >= j){
        cout << j << ' ';
      }else{
        cout << " ";
      }
    }
    cout << endl;
  }
}
