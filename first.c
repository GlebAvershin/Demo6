int six(int x) {
	int a;
	int k = 0;
	for (a = 1; a <= 1000; a++)
		if (a == x) {
			printf("Yes");
			break;
		}
		else if (x < a) {
			print("Too low!");
		}
		else if (x > a) {
			printf("Too high");
		}
}