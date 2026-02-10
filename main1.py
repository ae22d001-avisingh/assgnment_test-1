# write your code here
# make sure that the resultant fibonacci sequence is stored in 'fib_seq' array
# and the length of the array is stored in 'len_seq' variable

fib_seq = [0, 1]
len_seq = int(input('enter length'))

for i in range(2, len_seq):
    next = fib_seq[i - 1] + fib_seq[i - 2]
    fib_seq.append(next)

print(fib_seq)
# #####################################################################
# writing the results to a .dat file(dont change this part of the code)
# #####################################################################
outfile = open('Output.txt', 'w')

for i in range(len_seq):
    outfile.write(f'{fib_seq[i]}')
    outfile.write(' ')
outfile.close()
