#include <unistd.h>
void print_bits(unsigned char octet)
{
	int				i = 8; 
	unsigned char	bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int main(void)
{
    unsigned char bit = 169;

    write(1, "Original: ", 11);
    print_bits(bit);

    write(1, "\nSwapped:  ", 12);
    print_bits(swap_bits(bit));

    write(1, "\n", 1);

    return 0;
}

