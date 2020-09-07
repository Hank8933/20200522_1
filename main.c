#include <stdio.h>
#include <string.h>
#include <math.h>

// 1
#define CUBE(x) ((x)*(x)*(x))
#define MB4(n) ((n)%4)
#define less100(x, y) (((x)*(y))<100 ? 1 : 0)

// 2
#define NELEMS(a) (sizeof(a) / sizeof(*a))

// 3
//  a: 4
//  b: 4
//  c
#define DOUBLE(x) (2*(x))

// 4
//  a: 10/AVG(5,5)  會變10/10/2
#define AVG(x,y) (((x)-(y))/2)
//  b: 100/ AREA(5, 5)  會變100/5*5
#define AREA(x,y) ((x)*(y))

// 5
//  a: D
//  b: 2
// 6
//  a:
#define DISP(f,x) printf(#f "(%g) = %g\n", (x), (f(x)))
//  b:
#define DISP2(f,x,y) printf(#f "(%g, %g) = %g\n", (x), (y), (f((x),(y))))

// 7
//  a:
/*
long long_max(long x, long y)
{
    return x > y ? x : y;
}
*/
//  b: 會變成 unsigned long unsigned long_max()
//  c: typedef unsigned long unlong;

// 9
//  a:
#define CHECK(x,y,n) (((x)>=0&&(x)<=(n)-1&&(y)>=0&&(y)<=(n)-1)?1:0)
//  b:
#define MEDIAN(x,y,z) ((((y)-(z))*((y)-(x))<=0) ? y : ((((x)-(y))*((x)-(z)))<=0) ? x : z)
//  c:
#define POLYNOMIAL(x) ((3*(x)*(x)*(x)*(x)*(x)) + (2*(x)*(x)*(x)*(x)) - (5*(x)*(x)*(x)) - ((x)*(x)) + (7*(x)) - 6)

int main()
{
    printf("%d\n", CUBE(2));
    printf("%d\n", MB4(6));
    printf("%d\n\n", less100(50, 2));

    int a[10];
    printf("%d\n\n", NELEMS(a));

    printf("%d\n\n", DOUBLE(3));

    printf("%d\n", AVG(8, 2));
    printf("%d\n\n", AREA(2, 3));

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
    char s[5] = {0};

    strcpy(s, "abcd");
    int i = 0;
    putchar(TOUPPER(s[++i]));

    strcpy(s, "0123");
    i = 0;
    putchar(TOUPPER(s[++i]));

    putchar('\n');
    putchar('\n');

    DISP(sqrt, 3.0);
    DISP2(AREA, 2.0, 3.0);
    putchar('\n');

    printf("%d\n", CHECK(1, 3, 3));
    printf("%d\n", MEDIAN(10, 3, 9));
    printf("%d\n", POLYNOMIAL(2));
    return 0;
}
