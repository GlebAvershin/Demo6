int chetiri() {
	int k = 0;
	for (int i = 1; i < 1000; i++)
		if (i % 10 == 7) {
			k++;
		}
	printf("%d", k);
	return k;
}