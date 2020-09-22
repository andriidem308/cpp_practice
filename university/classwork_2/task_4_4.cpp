#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> sequence;

	while (true) {
		int new_num;
		cin >> new_num;
		if (new_num == 0) break;
		sequence.push_back(new_num);
	}

	bool flag = (sequence[0] > 0);
	int changes_amount = 0;
	for (int i = 1; i < sequence.size(); i++){
		if (!(flag && (sequence[i] > 0))) {
			flag = !(flag);
			changes_amount++;
		}
	}

	cout << "\nChanges: " << changes_amount << endl;

	return 0;
}