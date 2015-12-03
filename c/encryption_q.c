#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {

	int i = 0, j = 0, c = 0, d = 0, digit = 0, ascii = 0, ascii1 = 0, k = 0, m = 0;
	int l = 0, n = 0, o = 0, p = 0, q = 0, r = 0;
	char motions[] = {'F','B','L','R','U','D','f','b','l','r','u','d','\0'}, crypt[100][100];
	char data[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
		'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
		'0','1','2','3','4','5','6','7','8','9',
		'!','?',',','.',';',':','@','#','$','%','^','&','*','-','_','\0'};

	while(data[j] != '\0') {
		ascii = ("%d", data[i]);
		while(ascii > 0) {
			digit = ascii % 10;
			crypt[c][d] = motions[digit];
			ascii /= 10;
			d++;
		}
		d = 0;
		printf("Input:\t%c\tCrypted:\t%s\n", data[i], crypt[c]);
		j++; c = 0; i++;
	}
	i = 0;
	while(data[i] != '\0') {
		j = 0;
		while(data[j] != '\0') {
			ascii = ("%d", data[i]);
			while(ascii > 0) {
				digit = ascii % 10;
				crypt[c][d] = motions[digit];
				ascii /= 10;
				d++;
			}
			ascii1 = ("%d", data[j]);
			while(ascii1 > 0) {
				digit = ascii1 % 10;
				crypt[c][d] = motions[digit];
				ascii1 /= 10;
				d++;
			}
			d = 0;
			printf("Input:\t%c%c\tCrypted:\t%s\n", data[i], data[j], crypt[c]);
			j++; c = 0;
		}
		i++;
	}
	while(data[l] != '\0') {
		i = 0;
		while(data[i] != '\0') {
			j = 0;
			while(data[j] != '\0') {
				ascii = ("%d", data[i]);
				while(ascii > 0) {
					digit = ascii % 10;
					crypt[c][d] = motions[digit];
					ascii /= 10;
					d++;
				}
				ascii1 = ("%d", data[j]);
				while(ascii1 > 0) {
					digit = ascii1 % 10;
					crypt[c][d] = motions[digit];
					ascii1 /= 10;
					d++;
				}
				d = 0;
				printf("Input:\t%c%c%c\tCrypted:\t%s\n", data[l], data[i], data[j], crypt[c]);
				j++; c = 0;
			}
			i++;
		}
		l++;
	}
	while(data[n] != '\0') {
		l = 0;
		while(data[l] != '\0') {
			i = 0;
			while(data[i] != '\0') {
				j = 0;
				while(data[j] != '\0') {
					ascii = ("%d", data[i]);
					while(ascii > 0) {
						digit = ascii % 10;
						crypt[c][d] = motions[digit];
						ascii /= 10;
						d++;
					}
					ascii1 = ("%d", data[j]);
					while(ascii1 > 0) {
						digit = ascii1 % 10;
						crypt[c][d] = motions[digit];
						ascii1 /= 10;
						d++;
					}
					d = 0;
					printf("Input:\t%c%c%c%c\tCrypted:\t%s\n", data[n], data[l], data[i], data[j], crypt[c]);
					j++; c = 0;
				}
				i++;
			}
			l++;
		}
		n++;
	}
	while(data[o] != '\0') {
		n = 0;
		while(data[n] != '\0') {
			l = 0;
			while(data[l] != '\0') {
				i = 0;
				while(data[i] != '\0') {
					j = 0;
					while(data[j] != '\0') {
						ascii = ("%d", data[i]);
						while(ascii > 0) {
							digit = ascii % 10;
							crypt[c][d] = motions[digit];
							ascii /= 10;
							d++;
						}
						ascii1 = ("%d", data[j]);
						while(ascii1 > 0) {
							digit = ascii1 % 10;
							crypt[c][d] = motions[digit];
							ascii1 /= 10;
							d++;
						}
						d = 0;
						printf("Input:\t%c%c%c%c%c\tCrypted:\t%s\n", data[o], data[n], data[l], data[i], data[j], crypt[c]);
						j++; c = 0;
					}
					i++;
				}
				l++;
			}
			n++;
		}
		o++;
	}
	while(data[p] != '\0') {
		o = 0;
		while(data[o] != '\0') {
			n = 0;
			while(data[n] != '\0') {
				l = 0;
				while(data[l] != '\0') {
					i = 0;
					while(data[i] != '\0') {
						j = 0;
						while(data[j] != '\0') {
							ascii = ("%d", data[i]);
							while(ascii > 0) {
								digit = ascii % 10;
								crypt[c][d] = motions[digit];
								ascii /= 10;
								d++;
							}
							ascii1 = ("%d", data[j]);
							while(ascii1 > 0) {
								digit = ascii1 % 10;
								crypt[c][d] = motions[digit];
								ascii1 /= 10;
								d++;
							}
							d = 0;
							printf("Input:\t%c%c%c%c%c%c\tCrypted:\t%s\n", data[p], data[o], data[n], data[l], data[i], data[j], crypt[c]);
							j++; c = 0;
						}
						i++;
					}
					l++;
				}
				n++;
			}
			o++;
		}
		p++;
	}
	return 0;
}
