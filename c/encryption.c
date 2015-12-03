#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {

	int i = 0, j = 0, c = 0, d = 0, digit = 0, ascii = 0, count = 0;
	int g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11, g12;
	char crypt[100][100];
	//char motions[100];
	char motions[] = {'F','B','L','R','U','D','f','b','l','r','u','d','\0'};
	//char m[] = "FBLRUDfblrud";
/**
	//printf("1\n");
	g1 = 0;
	for(g1 = 0; g1 < 12; g1++) { g2 = 0;
	for(g2 = 0; g2 < 12; g2++) { g3 = 0; g2++;
	for(g3 = 0; g3 < 12; g3++) { g4 = 0;
	for(g4 = 0; g4 < 12; g4++) { g5 = 0; g4++;
	for(g5 = 0; g5 < 12; g5++) { g6 = 0;
	for(g6 = 0; g6 < 12; g6++) { g7 = 0; g6++;
	for(g7 = 0; g7 < 12; g7++) { g8 = 0;
	for(g8 = 0; g8 < 12; g8++) { g9 = 0; g8++;
	for(g9 = 0; g9 < 12; g9++) { g10 = 0;
	for(g10 = 0; g10 < 12; g10++) { g11 = 0; g10++;
	for(g11 = 0; g11 < 12; g11++) { g12 = 0;
	for(g12 = 0; g12 < 12; g12++) {
	//	printf("13\n");
		if(count == strtol(argv[1], NULL, 10)) {
			printf("\n%c%c%c%c%c%c%c%c%c%c%c%c\n", m[g1], m[g2], m[g3], m[g4], m[g5], m[g6], m[g7], m[g8], m[g9], m[g10], m[g11], m[g12]);
			motions[0] = m[g9];
			motions[1] = m[g8];
			motions[2] = m[g7];
			motions[3] = m[g6];
			motions[4] = m[g5];
			motions[5] = m[g4];
			motions[6] = m[g3];
			motions[7] = m[g2];
			motions[8] = m[g1];
			motions[9] = m[g10];
			motions[10] = m[g11];
			motions[11] = m[g12];
			count++;
		} else if(count < strtol(argv[1], NULL, 10)) { count++; }
		else { g1++; g2++; g3++; g4++; g5++; g6++; g7++; g8++; g9++; g10++; g11++; g12++; }
	} } } } } } } } } } } }
**/
	//printf("14\n");
	//printf("%s\n", motions);

	printf("\n");

	for(i = 1; i < argc; i++) {
		j = 0;
		//printf("15\n");
		while(argv[i][j] != '\0') {
			//printf("16\n");
			ascii = ("%d", argv[i][j]);
			while(ascii > 0) {
				//printf("17\n");
				digit = ascii % 10;
				//printf("18\n");
				//printf("%d\n", digit);
				//printf("%c\n", motions[digit]);
				crypt[c][d] = motions[digit];
				//printf("19\n");
				ascii /= 10;
				//printf("20\n");
				d++;
			}
			d = 0;
			printf("Input:\t%c\tASCII:\t%d\tCrypted:\t%s\n", argv[i][j], argv[i][j], crypt[c]);
			j++; c++;
		}
	}
	i = 0;
	printf("\nEncrypted:\t");
	while(i < c) {
		printf("%s", crypt[i]);
		i++;
	}
	printf("\n\n");
	return 0;
}
