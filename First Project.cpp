#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int nums[5][10];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			int randNum = 0 + rand() % 25;
			nums[i][j] = randNum;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			cout << nums[i][j];
			cout << "   ";
		}
		cout << endl;
	}

	return 1;
}





