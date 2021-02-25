#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	int start_time = clock();
	

	srand(time(NULL));
	setlocale(0, "rus");
	int massiv[10];
	for (int i = 0; i < 10;i++) {
		massiv[i] = rand()%10;
	}

	for (int i = 0; i < 10; i++) {
		cout << massiv[i] << ", ";
	}
	cout << endl;

	int end_time = clock();
	int result = end_time - start_time;
	cout << result << endl;

	return 0;
}
