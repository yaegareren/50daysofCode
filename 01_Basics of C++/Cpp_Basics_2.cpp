// CALCULATION ORDER FOR DATATYPES, OPERATOR PRECEDENCE, OVERFLOW IN CALCULATIONS, PRECISION ERRORS WITH DOUBLE/FLOAT

#include <bits/stdc++.h>
using namespace std; // to get cout and cin
int main()

{

    /*

       cout<<7/2; -> output is 3
       cout<< 7/2.0 -> output is 3.5

      int a = 3 / 2;
      int b = 3.0 / 2.0;
      double d = 3 / 2.0;
      double d1 = 3 / 2;
      std::cout << endl
                << a // prints 1
                << endl
                << b // prints 1
                << endl
                << d // prints 1.5
                << endl
                << d1; // prints 1

       calculation is done on the basis of higher datatype.

       cout<< 'c'+1 -> output is 100 since c has ascii=99

       order of precedence:
       double
       float
       long long int
       long int
       int
       char

       value is calculated first and then stored into the
       variable. So, it can vary according to the datatype.

       order of precedence of operators:

       category          operators                   associativity

       postfix         () [] -> ++ --                left to right

       unary           + - ! ~ ++ -- (type)* sizeof  right to left

       multiplicative   * / %                        left to right

       additive         + -                          left to right

       shift           << >>                         left to right

       relational      < <= > >=                     left to right

       equality        == !=                         left to right

       bitwise and     &                             left to right

       bitwise or      |                             left to right

       bitwise xor     ^                             left to right

       logical and     &&                            left to right

       logical or      ||                            left to right

       conditional     ?:                            right to left

       assignment                                    right to left

       comma           ,


        cout<< 7/2 * 3 gives 9
        cout<< 3 * 7/2 gives 10

    */

    /*
        datatypes: int, char, long int, long long int, float, double

        ranges for datatypes:

        -10^9 < int < 10^9
        -10^12 < long int < 10^12
        -10^18 < long long int < 10^18
        INT_MIN < int < INT_MAX */

    /* int a=100000, b=10000;
    int c= a*b;

    cout<< c << endl; /* this will only print 10^9 instead
                       of 10^10. This is called overflow. */

    /* int mx = INT_MAX;
    cout<<mx; // this prints the max value of the integer
              // 2147483647

    cout<<"\n"<< mx+1;*/
    /*this prints -2147483648. On adding
   1 to this mx  the value cycles back
   to the lowest possible values and adds
   1 to it. */

    /* to overcome the problem of overflow, we can replace the
    datatype of the variable from int to long int or
    long long int */

    /* another way of doing this calculation is to multiply by 1LL
    and change the datatype of the variable that will store the
    result.

    int d=100000, e=100000;
    long long int f= d * 1LL* e;
    cout<<endl<< f; */

    /* another method is to use double because it has a bigger range
    than int. But the output is 1e+010. We can use fixed keyword
    to remove the scientific notation. */

    /*
    double d=100000, e=100000;
    double f= d * e;
    cout<<fixed<<setprecision(0)<< f; */

    /*but the output we get is in decimal. So, we can use
    setprecision() to remove those decimals.*/
}
