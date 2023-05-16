#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
	
	// ============================================================================= class 11.1

	int numLines;

	int countLines(char *filename) {
		int count = 1;
		char c;

		FILE *file = fopen(filename, "r");

		if (file != NULL) {
			while (!feof(file)) {
				c = fgetc(file);
				if (c == '\n') count++;
			}

			fclose(file);
		}

		return count;
	}
	
	// numLines = countLines("./infile.txt");	
	// printf("The number of lines is %d\n", numLines);

	// ============================================================================= class 11.2

	int count[26] = {0};

	void letterFrequency(char *filename, int count[26]) {
		char c;
		FILE *file = fopen(filename, "r");

		if (file != NULL) {
			while (!feof(file)) {
				c = fgetc(file);

				if (isalpha(c)) {
					count[tolower(c) - 'a']++;
				}
			}

			fclose(file);
		}
	}

	// letterFrequency("./infile.txt", count);

	// ============================================================================= class 11.3

	void removeSpaces (char *infile, char *outfile) {
		char c;

		FILE *f1 = fopen(infile, "r");
		FILE *f2 = fopen(outfile, "w");

		if (f1 != NULL && f2 != NULL) {
			while (!feof(f1)) {
				c = fgetc(f1);
				if (c != EOF && c != '\n' && !isspace(c)) fputc(c, f2);
			}

			fclose(f1);
			fclose(f2);
		}
	}

	// removeSpaces("./infile.txt", "./outfile.txt");


	return 0;
};