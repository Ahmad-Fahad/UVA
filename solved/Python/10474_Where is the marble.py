from bisect import bisect_left
def Search(lst, x):
	index = bisect_left(lst,x)
	if index != len(lst) and lst[index] == x:
		return index
	else:
		return -1
c = 0
while True:
	n,q = input().split()
	n   = int(n)
	q   = int(q)
	lst_n = []
	lst_q = []
	if (n == 0) and (q == 0):
		break
	else:
		for i in range(n):
			x = int(input())
			lst_n.append(x)
		lst_n.sort()
		for i in range(q):
			x = int(input())
			lst_q.append(x)
		c = c+1
		print("CASE# {}:".format(c))
		for i in lst_q:
			index = Search(lst_n, i)
			index = int(index)
			if index == -1:
				print("{} not found".format(i))
			else:
				print("{} found at {}".format(i, index+1))
					

	