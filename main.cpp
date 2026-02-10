#include <fstream>

int main()
{
    // write your code here


    // make sure that the resultant fibonacci sequence is stored in 'fib_seq' array
    // and the length of the array is stored in 'len_seq' variable
    // so that the Output.txt file can be generated easily

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

