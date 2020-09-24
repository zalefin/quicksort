orig = input()
orig = [int(v) for v in orig.split(' ')[:-1]]
s = input()
s = [int(v) for v in s.split(' ')[:-1]]
print(s == sorted(orig))
