for i in range(1, 1001):
    f = open('C:/Users/dashk/Desktop/tests/output%d.txt' % i)
    x = f.readlines()
    for j in range(0, 999):
        if x[j] > x[j + 1]:
            print("Wrong sorting. Output is incorrect.")
            exit()
    f.close()
print("All is correct.")
