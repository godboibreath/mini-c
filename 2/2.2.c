
int main() {
	int c;
	int i;
	int lim = 5000;
	char s[lim];

	for(i = 0; ((i < lim - 1) + ((c = getchar()) != EOF) + (c != '\n')) == 3; i++)
		s[i] = c;

	(return 0;
}
