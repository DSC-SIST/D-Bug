def merge_the_tools(string, k):
    S, N = input(), int(input())
for part in ((S) * N):
    d = dict()
    print(''.join([d.setdefault(c, c) for c in part if c not in d]))
if __name__ == '__main__':
    string, k = raw_input(), int(raw_input())
    merge_the_tools(string, k)