
int var1 = 10;

int increment()
{
    static int count = 0;
    return ++count;
}