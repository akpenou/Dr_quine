import os

def main():
	QUINE = "import os{:c}{:c}def main():{:c}{:c}QUINE = {:c}{:s}{:c}{:c}{:c}replication = {:d}{:c}{:c}if replication :{:c}{:c}{:c}replication -= 1{:c}{:c}{:c}f = open('Sully_' + str(replication) + '.py', 'w'){:c}{:c}{:c}print(QUINE.format(10, 10, 10, 9, 34, QUINE, 34, 10, 9, replication, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 10, 10, 9, 10), file = f){:c}{:c}{:c}f.close(){:c}{:c}{:c}os.system('python3 ./Sully_'+ str(replication) + '.py'){:c}{:c}if __name__ == '__main__' :{:c}{:c}main()"
	replication = 5
	if replication :
		replication -= 1
		f = open('Sully_' + str(replication) + '.py', 'w')
		print(QUINE.format(10, 10, 10, 9, 34, QUINE, 34, 10, 9, replication, 10, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 10, 10, 9, 10), file = f)
		f.close()
		os.system('python3 ./Sully_'+ str(replication) + '.py')

if __name__ == '__main__' :
	main()


