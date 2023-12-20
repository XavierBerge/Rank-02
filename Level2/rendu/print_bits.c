#include <unistd.h>
void print_bits(unsigned char octet)
{
	int				i = 8;
	unsigned char	bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
	}
}


// Déclaration de la fonction print_bits
void print_bits(unsigned char octet);

int main(void)
{
    unsigned char testValue = 170; // Valeur de test (peut être modifiée)

    write(1, "Original: ", 11);
    print_bits(testValue);
    write(1, "\n", 1);

    return 0;
}

