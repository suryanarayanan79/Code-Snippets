class Solution {
public:
    void Swap(char* a, char* b) {
	char t = *a;	
	*a = *b;
	*b = t;
}
    void reverseString(vector<char>& s) {
int firstIndex = 0;
	int lastIndex = s.size() - 1;

	int diff = lastIndex - firstIndex;
	int minDiff = diff;

	if (s.size() % 2 == 0 ) {
		minDiff = 1;
	}
	else {
		minDiff = 2;
	}
	while (diff >= minDiff) {
		Swap(&s[firstIndex],&s[lastIndex]);
		firstIndex++;
		lastIndex--;
		diff = lastIndex - firstIndex;
	}	
    }
};
