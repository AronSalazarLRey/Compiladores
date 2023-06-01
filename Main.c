void myfunc(void);
int mysum(int a, int b);

int main(int argc, char** argv)
{
    myfunc();
    int result = mysum(10,5);
    printf("%i + %i = %i" , 10, 5, result);
    return 0;
}
void myfunc(void)
{
    printf("My func called\n");
}
int mysum(int a, int b)
{
    return a + b;
}
