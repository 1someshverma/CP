for t in range(int(input())):
	a, b = map(int, input().split())
	if a > b:
		a, b = b, a
	print ('YES' if ( ((a + b) % 3) == 0 and a * 2 >= b) else 'NO')