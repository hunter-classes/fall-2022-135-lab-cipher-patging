/*
Patrick Ging
Professor Zamanksy
Lab Cypher
funcs.cpp
*/
#include <iostream>
#include <vector>
#include <cmath>

#include "funcs.h"
#include "caesar.h"

void printVec(std::vector<double> v) {
	// debugging tool
	for (int i = 0; i < v.size();i++) {
		std::cout << v[i] << ",";
	}
	return;
}


std::vector<double> getFrequencies(std::string s) {
	/*
	Gets a frequency distribution of a string in english char
	returns double vector
	*/
	std::vector<double> frequencies(26);// intializing size 26

	int count = 0; //characters in s without space

	for(int i = 0; i< s.length(); i++) {
		// counting frequencies

		switch(s[i]) {
			// had to write this out w/ python
			case 'a':
				frequencies[0] += 1.0;
				count++;
				break;

			

			case 'A':
				frequencies[0] += 1.0;
				count++;
				break;

			

			case 'b':
				frequencies[1] += 1.0;
				count++;
				break;

			

			case 'B':
				frequencies[1] += 1.0;
				count++;
				break;

			

			case 'c':
				frequencies[2] += 1.0;
				count++;
				break;

			

			case 'C':
				frequencies[2] += 1.0;
				count++;
				break;

			

			case 'd':
				frequencies[3] += 1.0;
				count++;
				break;

			

			case 'D':
				frequencies[3] += 1.0;
				count++;
				break;

			

			case 'e':
				frequencies[4] += 1.0;
				count++;
				break;

			

			case 'E':
				frequencies[4] += 1.0;
				count++;
				break;

			

			case 'f':
				frequencies[5] += 1.0;
				count++;
				break;

			

			case 'F':
				frequencies[5] += 1.0;
				count++;
				break;

			

			case 'g':
				frequencies[6] += 1.0;
				count++;
				break;

			

			case 'G':
				frequencies[6] += 1.0;
				count++;
				break;

			

			case 'h':
				frequencies[7] += 1.0;
				count++;
				break;

			

			case 'H':
				frequencies[7] += 1.0;
				count++;
				break;

			

			case 'i':
				frequencies[8] += 1.0;
				count++;
				break;

			

			case 'I':
				frequencies[8] += 1.0;
				count++;
				break;

			

			case 'j':
				frequencies[9] += 1.0;
				count++;
				break;

			

			case 'J':
				frequencies[9] += 1.0;
				count++;
				break;

			

			case 'k':
				frequencies[10] += 1.0;
				count++;
				break;

			

			case 'K':
				frequencies[10] += 1.0;
				count++;
				break;

			

			case 'l':
				frequencies[11] += 1.0;
				count++;
				break;

			

			case 'L':
				frequencies[11] += 1.0;
				count++;
				break;

			

			case 'm':
				frequencies[12] += 1.0;
				count++;
				break;

			

			case 'M':
				frequencies[12] += 1.0;
				count++;
				break;

			

			case 'n':
				frequencies[13] += 1.0;
				count++;
				break;

			

			case 'N':
				frequencies[13] += 1.0;
				count++;
				break;

			

			case 'o':
				frequencies[14] += 1.0;
				count++;
				break;

			

			case 'O':
				frequencies[14] += 1.0;
				count++;
				break;

			

			case 'p':
				frequencies[15] += 1.0;
				count++;
				break;

			

			case 'P':
				frequencies[15] += 1.0;
				count++;
				break;

			

			case 'q':
				frequencies[16] += 1.0;
				count++;
				break;

			

			case 'Q':
				frequencies[16] += 1.0;
				count++;
				break;

			

			case 'r':
				frequencies[17] += 1.0;
				count++;
				break;

			

			case 'R':
				frequencies[17] += 1.0;
				count++;
				break;

			

			case 's':
				frequencies[18] += 1.0;
				count++;
				break;

			

			case 'S':
				frequencies[18] += 1.0;
				count++;
				break;

			

			case 't':
				frequencies[19] += 1.0;
				count++;
				break;

			

			case 'T':
				frequencies[19] += 1.0;
				count++;
				break;

			

			case 'u':
				frequencies[20] += 1.0;
				count++;
				break;

			

			case 'U':
				frequencies[20] += 1.0;
				count++;
				break;

			

			case 'v':
				frequencies[21] += 1.0;
				count++;
				break;

			

			case 'V':
				frequencies[21] += 1.0;
				count++;
				break;

			

			case 'w':
				frequencies[22] += 1.0;
				count++;
				break;

			

			case 'W':
				frequencies[22] += 1.0;
				count++;
				break;

			

			case 'x':
				frequencies[23] += 1.0;
				count++;
				break;

			

			case 'X':
				frequencies[23] += 1.0;
				count++;
				break;

			

			case 'y':
				frequencies[24] += 1.0;
				count++;
				break;

			

			case 'Y':
				frequencies[24] += 1.0;
				count++;
				break;

			

			case 'z':
				frequencies[25] += 1.0;
				count++;
				break;

			

			case 'Z':
				frequencies[25] += 1.0;
				count++;
				break;
		}
	} // switch casing 

	for (int i=0;i<26;i++) {
		frequencies[i] = frequencies[i] / count;
	}

	return frequencies;
}

std::vector<double> shiftFreq(std::vector<double> v, int shift) {
	/* applies a right ward shift shift amount of tims to the vector v
	 and returns the vector
	 eg shiftFreq( (1,2,3) , 1) would return the vector (3,1,2) */

	int vectorSize = v.size(); // amt of features in the vector
	int position;
	std::vector<double> shiftedVector(vectorSize);

	for(int i =0; i < vectorSize;i++) {
		position = (i + 1 ) % vectorSize; // the new position of that element which handles wrap around
		shiftedVector[position] = v[i]; // applying shift
	}

	// return the shifted vector
	return shiftedVector;
}

double calcDistance (std::vector<double> v1, std::vector<double> v2) {
	/* Returns the distance between two vectors using distance formula
	assumes that the size of both vectors is equal*/

	double raw_distances = 0;

	for(int i=0; i< v1.size();i++) {
		// x2 - x1 squared
		raw_distances += std::pow(v2[i]-v1[i],2);
	}

	// applying sqrt to it
	return std::sqrt(raw_distances);
}


std::string solve(std::string encrypted_string) {
	/*
	Uses frequency analysis to try decrypt a caesar cypher
	and will return the best solution using distance formula
	*/

	// from marian webster A-Z
	std::vector<double> ENGLISH_FREQUENCIES{.084966,.020720,.045388,.033844,.111607,.018121,.024705,.030034, .075448,.001965,.011016,.054893,.030129,.066544,.071635,.031671,.001962,.075809,.057351,.069509,.036308,.010074,.012899,.002902,.017779,.002902};

	std::vector<double> frequencies(26);
	frequencies = getFrequencies(encrypted_string);

	//std::vector<double> currentFreq(26);

	int best_shift = 0;

	double best_distance = 2147483647; // some arbitrarily large #
	double currentDist; 

	for(int i=1;i<26;i++) { // i is each of the shifts
		frequencies =  shiftFreq(frequencies,1);
		currentDist = calcDistance(frequencies, ENGLISH_FREQUENCIES );

		if (best_distance > currentDist) {
			// if this is a better fit put it's statistics
			best_distance = currentDist;
			best_shift = i;
		}

	}

	// once we get the best match return it shifted
	return encryptCaesar(encrypted_string, best_shift);
}
