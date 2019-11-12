#include <iostream> 
#include <string.h>
using namespace std;

struct Sentence {
	char string[50];
	char *words[10];
	int wordCount = -1;
};

void getString (char *in, int buffer) {
	cin.getline (in, buffer);
}


int string2array (char *inString, char **wordarray) {
	int wordcount=-1;
	char *token = strtok (inString, " ");
	while (token != NULL) {
		wordcount++;
		wordarray[wordcount] = token;
		token = strtok (NULL, " ");
	}
	return wordcount;
}

void proper (char *word) {
	word[0] = toupper (word[0]);
}

void printArray (char **words, int wordcount) {
	for (int i = 0; i <= wordcount; i++) {
		cout << words[i] << "\n";
	}
}

int main() {
	struct Sentence s;
	cout << "Enter a string: ";
	getString (s.string, 50);
	s.wordCount = string2array (s.string, s.words);
	for (int i = 0; i<=s.wordCount; i++) {
		proper (s.words[i]);
	}
	printArray (s.words, s.wordCount);
}

