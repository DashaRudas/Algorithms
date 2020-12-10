import random
for j in range(1, 101):
   file = open('C:/Users/dashk/Desktop/tests/input%d.txt' %j, "w")
   for i in range(1, 1001):
       line = str(random.randint(-1000, 1000)) + "\n"
       file.write(line)
   file.close()
for k in range(1, 101):
   file = open('C:/Users/dashk/Desktop/tests/output%d.txt' %k, "w")
   file.close()

