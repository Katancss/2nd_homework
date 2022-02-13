#include <iostream>

using namespace std;

unsigned long long get_number() {
	unsigned long long result = 0;
	char current_value;
	while (cin >> current_value) {
		if (current_value == '@')
			return result;
		else if (('0' - 1) < current_value < ('9' + 1)) {
			result *= 16;
			result += current_value - '0';
		}
		else if (('A' - 1) < current_value < ('F' + 1)) {
			result *= 16;
			result += current_value - 'A' + 10;
		}
	}
	return result;
}

unsigned long long sum() {
	auto a = get_number();
	auto b = get_number();
	return a + b;
}

int main() {
	cout << sum() << endl;
	return 0;
}