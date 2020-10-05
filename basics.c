#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char base64_table[64] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
        'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',
        'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
        'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'
};

void three_bytes_to_base64(char *base64_string, int8_t first_byte, int8_t second_byte,
                           int8_t third_byte, int8_t padding_bytes) {

    if (padding_bytes) {
        base64_string[3] = base64_table[(third_byte & 0x3F)];
    } else {

    }
}

size_t calculate_base64_length(const i)

        void hex_to_base64(const char *base64_string, const char *hex_string) {
    const size_t string_length = strlen(hex_string);

    // Calculate null extended hex string length
    const size_t extended_string_length = string_length % 2 ? string_length : string_length + 1;
    char null_extended_hex_string[extended_string_length];

    // Prepend zero character if odd number of characters in hex string
    if (string_length % 2) {

    }

    if (string_length % 2) {
        printf("The input number needs to be a hexadecimal number with an even number of digits!\n");

        return;
    } else {
        // Convert to bytes
        unsigned char bytes[string_length / 2];

        for (int i = 0; i < string_length / 2; i++) {
            char tmp[3] = {hex_string[i * 2], hex_string[i * 2 + 1], 0x0};
            bytes[i] = strtol(tmp, NULL, 16);
        }

//        char base64_string[string_length / 2 / 3 * 4];
//
//        for (int i = 0; i < string_length / 2 / 3; i++) {
//            three_bytes_to_base64(base64_string + i * 3, bytes[i * 3], bytes[i * 3 + 1], bytes[i * 3 + 2]);
//        }




        // TODO: Append zero bytes if needed
        //if ()
        //    printf("\n");
    }
    printf("Input: %s\n", hex_string);
}

int main(int argc, char const *argv[]) {
    hex_to_base64("49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d");
    return 0;
}
