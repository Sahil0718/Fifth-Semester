#include <stdio.h>

int main()
{
    int i, f;
    char popit[100], c;

    printf("ENTER THE ENCRYPTED MESSAGE: \n");
    fgets(popit, sizeof(popit), stdin);

    printf("PLEASE ENTER THE KEY: \n");
    scanf("%d", &f);

    for (i = 0; popit[i] != '\0'; i++)
    {
        c = popit[i];

        if (c >= 'a' && c <= 'z')
        {
            c = c - f;
            if (c < 'a')
            {
                c = c + 'z' - 'a' + 1;
            }
            popit[i] = c;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = c - f;
            if (c < 'A')
            {
                c = c + 'Z' - 'A' + 1;
            }
            popit[i] = c;
        }
    }

    printf("FINALLY THE DECRYPTED MESSAGE IS: %s", popit);
    return 0;
}
