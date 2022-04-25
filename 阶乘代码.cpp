int zichen(int n)
{
    if(n == 1)
        return 1;
    return n * zichen(n - 1);
}
