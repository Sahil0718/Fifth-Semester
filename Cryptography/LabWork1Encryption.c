#include <stdio.h>
#include <conio.h>
int main()
{
    int i, f;
    char popit[100], c;
    printf("ENTER A PLAIN_TEXT: \n");
    fgets(popit, sizeof(popit), stdin);
    printf("ALSO ENTER THE KEY: \n");
    scanf("%d", &f);
    for (i = 0; popit[i] != '\0'; i++)
    {
        c = popit[i];
        // Encryption for lowercase letters
        if (c >= 'a' && c <= 'z')
        {
            c = c + f;
            if (c > 'z')
            {
                c = c - 'z' + 'a' - 1;
            }
            popit[i] = c;
        }
        // Encryption for uppercase letters
        else if (c >= 'A' && c < 'Z')
        {
            c = c + f;
            if (c > 'Z')
            {
                c = c - 'Z' + 'A' - 1;
            }
            popit[i] = c;
        }
    }
    printf("FINALLY THE ENCRYPTED MESSAGE IS: %s", popit);
    return 0;
}