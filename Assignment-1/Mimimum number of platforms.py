def parkPlatform(arr, dep, n):

	arrival.sort()
	departure.sort()

	plat_needed = 1
	result = 1
	i = 1
	j = 0

	while (i < n and j < n):

		if (arrival[i] <= departure[j]):
			plat_needed += 1
			i += 1

		elif (arrival[i] > departure[j]):

			plat_needed -= 1
			j += 1
		if (plat_needed > result):
			result = plat_needed

	return result

# Driver code


arrival = [900, 940, 950, 1100, 1500, 1800]
departure = [910, 1200, 1120, 1130, 1900, 2000]
n = len(arrival)

print("Minimum  = ",parkPlatform(arrival, departure, n), "platforms required")
