import sys

replace = {'"':34, '\t':9, '\n':10}

def usage():
	print('Usage: python3 {} <filename>'.format(sys.argv[0]))
	print('The file must be a .py.quine')
	print('The file must have \'QUINE = ""\' and \'print(QUINE);\'')
	exit()

def quine_integration(code, quine_chr, quine_print):
	count = 1
	for i in range(quine_chr.index('QUINE')):
		if quine_chr[i : i + 4] == '{:c}':
			count += 1
	quine_print = quine_print[0:count] + ['QUINE'] + quine_print[count:]
	count = len(printf)
	code = code.replace('QUINE = ""', 'QUINE = "' + quine_chr + '"')
	code = code.replace('QUINE = {:c}{:c}', 'QUINE = {:c}{:s}{:c}')
	code = code.replace('print(QUINE', 'print(QUINE.format(' + ', '.join(quine_print) + ')')
	return code


def quine_parsing(f):
	""" Parse the file to for the treatment """
	res = ''
	char = ''
	print_elem = []
	s = f.readline()
	while 1:
		res += s
		for i in s:
			if i in replace:
				c += '{:c}'
				p.append(str(replace[i]))
			else:
				c += i
		s = f.readline()
		if not s :
			res = res[0:len(res) - 1]
			break
	return (res, char, print_elem)

def parsing_argument():
	files = []
	print_ = ''
	auto = False
	for av in sys.argv[1:]:
		if '.py.quine' in av:
			files.append(av)
		if '-a' in av:
			auto = True
		else:
			usage()
	return (files, print_)

def quine_maker(fs, p, auto):
	""" Realize the quine and return it if not in auto mode """
	try:
		f = open(fs, 'r')
	except Exception as e:
		print(e)
		exit()
	txt, chr_quine, print_quine = quine_parsing(f)
	f.close()
	res = quine_integration(txt, chr_quine, print_quine)
	if auto:
		f = open(fs[:fs.index('.quine')], 'x')
		f.write(str(res))
		f.close()
		return False
	return res

def main():
	if len(sys.argv) < 2:
		usage()
		return 0
	files, quine_printf, auto = parsing_argument()
	if files == 0:
		usage()
	for fs in files:
		do_print = quine_maker(fs, quine_printf, auto)
		if do_print:
			print('--- ' + fs + ' ---')
			print(do_print + '\n\n')

if __name__ == '__main__' :
	main()
