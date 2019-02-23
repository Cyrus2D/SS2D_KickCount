import time
i = 0
t1 = time.time()
for i in renge(100000):
  print(i)
t2 = time.time()
print((t2 - t1)*1e6)
