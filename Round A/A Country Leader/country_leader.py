import numpy as np

t = int(raw_input())

for k in range(1, t+1):
	n = int(raw_input())
	best_count = 0
	best = ''

	inputs_ = []

	for i in range(1, n+1):
		inputs_.append(raw_input())

	for input_ in np.sort(inputs_):
		the_list = np.unique(list(input_))
		curr_count = len(the_list)

		if ' ' in the_list:
			curr_count -= 1

		if curr_count > best_count:
			best_count = curr_count
			best = input_

	print 'Case #%d: %s' % (k, best)
