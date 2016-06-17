QUINE = "QUINE = {:c}{:s}{:c}{:c}for i in range(100):{:c}{:c}i * 2{:c}print(QUINE.format(34, QUINE, 34, 10, 10, 9, 10, 10)){:c}"
for i in range(100):
	i * 2
print(QUINE.format(34, QUINE, 34, 10, 10, 9, 10, 10))

