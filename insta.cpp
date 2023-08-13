#include <iostream>

int main() {
	int T;
	std::cout << "Enter the no. of accs to check : ";
	std::cin >> T;
	std::cout << "\n";

	if (!std::cin) {
		std::cout << "Try entering an integer next time, dikhead\n";
	} else if( T < 0 ) {
		std::cout << "Why are you making this program negative just like your life\n";
}

	for(int i = 1; i < T+1; i++) {
		int a, b;
		std::cout << "\nEnter the no. of following and followers respectively for acc " << i << " \n";
		std::cin >> a >> b;
		std::cout << "\n";

		if(!std::cin) {
			std::cout << "Try entering an integer next time, dikhead\n";
			break;
		} else if ( T < 0 || a < 0 || b < 0) {
			std::cout << "Why are you making this program negative just like your life?\n";
			break;
		} else if (a <= (b*10)) {
			std::cout << "Account " << i << " is normal\n";
		} else if (a > (b*10)) {
			std::cout << "Account " << i << " is marked as spam\n";
		}
	}
}
	
