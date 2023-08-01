#include <stdio.h>

// function for Caesar Cipher data encryption
void encryptDat(char dat[], int key) {
    for (int i = 0; dat[i] != '\0'; i++) {
        char currChar = dat[i];

        // Verify to see if the character is an uppercase letter.
        if (currChar >= 'A' && currChar <= 'Z') {
            dat[i] = ((currChar - 'A') + key) % 26 + 'A';
        }
        //Identify the character's lowercase alphabet by checking.
        else if (currChar >= 'a' && currChar <= 'z') {
            dat[i] = ((currChar - 'a') + key) % 26 + 'a';
        }
    }
}

int main() {
    char data[1000];
    int key;

    printf("Enter your data to encrypt: ");
    fgets(data, sizeof(data), stdin);

    printf("Enter encryption key (an integer): ");
    scanf("%d", &key);

    // Encrypt data
    encryptDat(data, key);

    printf("Encrypted data is: %s\n", data);

    return 0;
}