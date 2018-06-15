{
    if (argc != 2)
    {
        printf ("Usage: ./caesar k\n");
        return 1;
    }
    int k = atoi(argv[1]);
    if (k < 0)
    {
        printf ("The key must be positive \n");
        return 1;
    }
    string p = get_string("Plaintext: ");
    printf ("Ciphertext: ");
    for (int i = 0, len = strlen(p); i < len; i++)
    {
        if isupper(p[i])
        {
            printf ("%c", ((p[i] - 'A' + k)%26 + 'A'));
        }
        else if islower(p[i])
        {
            printf ("%c", ((p[i]) - 'a' + k)%26 + 'a');
        }
        else
        {
            printf ("%c", p[i]);
        }
    }
}
