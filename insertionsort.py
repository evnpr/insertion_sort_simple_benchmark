import time

def sort_numbers(list):
    start = time.clock()
    for i in range(1, len(list)):
        val = list[i]
        j = i - 1
        while (j >= 0) and (list[j] > val):
            list[j+1] = list[j]
            j = j - 1
        list[j+1] = val
    end = time.clock()
    print "%.2gs" % (end-start)

list = []
#for i in range(0,n):
#  t = int(input())
#  list.append(t)

with open('example.txt') as fp:
    for line in fp:
       list.append(int(line))

sort_numbers(list)

