"""
Question No. 15:

Consider the following:

* A string, _s_ , of length _n_ where _s_ = c<sub>0</sub>c<sub>1</sub>...c<sub>n-1</sub>.
* An integer, _k_ , where _k_ is a factor of _n_.
We can split _s_ into n/x subsegments where each subsegment, _t<sub>i</sub>_, consists of a contiguous block of _k_ characters in _s_ . Then, use each _t<sub>i</sub>_ to create string  _u<sub>i</sub>_ such that:

* The characters in  _u<sub>i</sub>_ are a subsequence of the characters in _t<sub>i</sub>_ .

* Any repeat occurrence of a character is removed from the string such that each character in _u<sub>i</sub>_ occurs exactly once. In other words, if the character at some index _j_ in _t<sub>i</sub>_ occurs at a previous index _<j_  in _t<sub>i</sub>_, then do not include the character in string _u<usb>i</sub>_.

* Given _s_ and _k_ , print _n/k_ lines where each line _i_ denotes string _u<sub>i</sub>_ .

Difficulty Level : MEDIUM

"""
def merge_the_tools(string, k):
    S, N = input(), int(input())
for part in ((S) * N):
    d = dict()
    print(''.join([d.setdefault(c, c) for c in part if c not in d]))
if __name__ == '__main__':
    string, k = raw_input(), int(raw_input())
    merge_the_tools(string, k)
    
