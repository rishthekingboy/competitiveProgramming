#include <iostream>  

using namespace std;  

int main() {  

	int n1 = 0, n2 = 1, n3, i, number; 

	cout << "Enter the number of elements: ";    
	cin >> number;    
	cout << n1 << " " << n2 << " "; //printing 0 and 1  

	for(i=2; i<number; ++i) { // starting with 2 coz 0 and 1 is printed already
		n3 = n1 + n2;    
		cout << n3 << " ";    
		n1 = n2;    
		n2 = n3;    
	}    
	cout << endl;
	return 0;  
}  