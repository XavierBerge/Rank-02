#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
	return  (((octet >> 0) & 1 ) << 7)|
			(((octet >> 1) & 1) << 6) | 
			(((octet >> 2) & 1) << 5) |
			(((octet >> 3) & 1) << 4) | 
			(((octet >> 4) & 1) << 3) |
			(((octet >> 5) & 1) << 2) | 
			(((octet >> 6) & 1) << 1) |
			(((octet >> 7) & 1) << 0);
}


int main() {
    unsigned char original_octet = 0xD5; // Exemple avec l'octet 1101 0101
    unsigned char inverted_octet = reverse_bits(original_octet);

    // Affichage des résultats
    printf("Octet d'origine (binaire): ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (original_octet >> i) & 1);
    }
    printf("\n");

    printf("Octet inversé (binaire): ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (inverted_octet >> i) & 1);
    }
    printf("\n");

    return 0;
}

