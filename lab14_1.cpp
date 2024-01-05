#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
  int i = 1;
  while (i < N) {
    cout << "Pass " << i << ":";
    T curr = d[i];
    int j = i;
    while (j > 0 && d[j-1] < curr) {
      d[j] = d[j-1];
      j--;
    }
    d[j] = curr;
    for(int j = 0; j < N; j++) cout << d[j] << " ";
    i++;
    cout << '\n';
  }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
