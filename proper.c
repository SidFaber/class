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
	cout << ")" << inString << "(\n";
	char *token = strtok (inString, " ");
	while (token != NULL) {
		wordcount++;
		cout << wordcount << "\n";
		wordarray[wordcount] = token;
		token = strtok (NULL, " ");
	}
	return wordcount;
}

void proper (char *word) {
	cout << word << "->" ;
	word[0] = toupper (word[0]);
	cout << word << "\n" ;
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
	cout << "-" << s.string << "=\n";
	s.wordCount = string2array (s.string, s.words);
	cout << s.wordCount << "!\n";
	for (int i = 0; i<=s.wordCount; i++) {
		proper (s.words[i]);
	}
	printArray (s.words, s.wordCount);
}

