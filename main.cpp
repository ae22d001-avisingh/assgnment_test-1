#include <fstream>

int main()
{
    // write your code here

    // make sure that the resultant fibonacci sequence is stored in 'fib_seq' array
    // and the length of the array is stored in 'len_seq' variable

    // #####################################################################
    // writing the results to a .dat file(dont change this part of the code)
    // #####################################################################
    std::ofstream outf{"Result.dat"};
    outf << len_seq << "\n\n";
    for(int i = 0; i < len_seq; ++i)
    {
        outf << fib_seq[i] << "\n";
    }
    return 0;
}