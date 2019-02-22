import os
x = []
sum = 0
i = 0
cnt = 0
n = len(x)
folder = "../time_logs"
os.chdir(folder)
log_files = os.listdir()
for i in range(n):
    log_file_name = log_files[i]
    log_file = open(log_file_name, "r")
    log = log_file.read()
    lines = log.split("\n")
    for i in range(len(lines) - 2):
        if ("KCT" in lines[i + 1]):
            cnt += 1
            linetmp = lines[i + 1].split("|")
            xtmp = linetmp[0].split(",")
            x.append(float(xtmp[0 + 1]))
            sum += float(xtmp[0 + 1])
n = len(log_files)
print(x)
print("num = ")
print(cnt)
print("sum = ")
print (sum)
print("avg = ")
print(sum / n)
