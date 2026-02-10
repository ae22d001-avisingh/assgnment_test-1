# write your code here
# make sure that the resultant fibonacci sequence is stored in 'fib_seq' array
# and the length of the array is stored in 'len_seq' variable



# #####################################################################
# writing the results to a .dat file(dont change this part of the code)
# #####################################################################
outfile = open('Output.txt', 'w')

for i in range(len_seq):
    outfile.write(f'{fib_seq[i]}')
    outfile.write('\n')
outfile.close()
