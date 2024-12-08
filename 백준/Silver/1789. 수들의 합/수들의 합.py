s = int(input())

i=1

while True:
    s -= i
    if s == 0:
        print(i)
        break
    elif s < 0:
        print(i-1)
        break
    i += 1
