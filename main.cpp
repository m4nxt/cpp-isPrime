#include <iostream>
#include <cmath>

class Main {
	public: bool isPrime ( int n ) {
		if ( n == 1 ) { return false; }
		if ( 1 < n & n < 4 ) { return true; }
		if ( n % 2 == 0 ) { return false; }
		int m = std::ceil( sqrt(n) );
		for ( int i = 3; i < m; i += 2 ) {
			if ( n % i == 0 ) { return false; }
		}
		return true;
	};
};

int main() {
	Main Main;
	for (int i = 1; i < 100; i++) {
		if ( Main.isPrime(i) ) {
			std::cout << i << " is a prime\n";
		}
	}
	return 0;
};