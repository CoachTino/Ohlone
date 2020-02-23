// #libraries

long foobar(long a, long b, long c)
{
    long xx = a + 2;
    long yy = b + 3;
    long zz = c + 4;
    long sum = xx + yy + zz;

    return xx * yy * zz + sum;
}

long main()
{
    return foobar(77, 88, 99);
}