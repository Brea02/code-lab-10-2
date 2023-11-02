#include<iostream>
#include<string>

using namespace std;

int count_words(string str);

int main() {
	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q") break;
		cout << "Word count: " << count_words(str) << endl;
	}
}

int count_words(string str) {
	int num_char = str.length();
	int num_last = str.length() - 1;

	int words = 1;
	int x = 0;

	for (x = 0; x <= num_last; x++) {
		string cut = str.substr(x, 1);
		if (cut == " ") {
			words++;
		}
		string check = (str.substr(x, 1) + str.substr((x + 1), 1));
		if (check == "  ") {
			words--;
		}


	}

	return words;
}
