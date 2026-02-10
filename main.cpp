#include <fstream>
#include <iostream>

int main()
{
    // write your code here
    int len_seq{};

    std::cin >> len_seq;

    int fib_seq[len_seq];

    fib_seq[0] = 0;
    fib_seq[1] = 1;

    for(int i = 2; i < len_seq; ++i)
    {
        fib_seq[i] = fib_seq[i - 1] + fib_seq[i - 2];
    }


    // make sure that the resultant fibonacci sequence is stored in 'fib_seq' array
    // and the length of the array is stored in 'len_seq' variable

    // #####################################################################
    // writing the results to a .dat file(dont change this part of the code)
    // #####################################################################
    std::ofstream outf{"Output.txt"};

    for(int i = 0; i < len_seq; ++i)
    {
        outf << fib_seq[i] << " ";
    }
    return 0;
}

