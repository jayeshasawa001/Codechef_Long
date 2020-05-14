adj=[1,-1]

def update(i,j,s):
	for t in adj:
		s.add((i+t,j))
		s.add((i,j+t))

for _ in range(int(input())):
	n,m,k=map(int,input().split())
	s, fl, f=set(), set(), 4*k
	for _ in range(k):	
		i,j=map(int,input().split())
		k=0
		if (i,j) in s:
			for t in adj:
				if (i+t,j) in fl:
					k+=1
				if (i,j+t) in fl:
					k+=1
		f-=k*2
		fl.add((i,j))
		update(i,j,s)
	print(f)