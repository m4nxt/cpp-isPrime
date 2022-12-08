#include <iostream>
#include <cmath>

class Main {
	public: bool isPrime ( int n ) {
		if ( n == 1 ) { return false; }
		if ( 1 < n & n < 4 ) { return true; }
		if ( n % 2 == 0 ) { return false; }
		for ( int i = 3; i*i >= n; i += 2 ) {
			if ( n % i == 0 ) { return false; }
		}
		return true;
	};
};

int main () {
	Main Main;
	int x;
	std::cout << "Range: "; 
	std::cin >> x;
	for (int i = 1; i <= x; i++) {
		if ( Main.isPrime(i) ) {
			std::cout << i << " ";
		}
	}
	std::cout << "\n";
	return 0;
};