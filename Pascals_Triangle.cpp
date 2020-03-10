class Solution {
public:
    vector<vector<int>> generate(int numRows) {
vector<vector<int>> pt;
	vector<int> inside;

	for (int outer = 0; outer < numRows; outer++) {
		for (int inner = 0; inner <= outer; inner++) {
			if (inner == 0 || inner == outer)
			{
				inside.push_back(1);
			}
			else
			{
				inside.push_back(pt[outer - 1][inner - 1] + pt[outer - 1][inner]);
				//pt[outer][inner] = pt[outer - 1][inner - 1] + pt[outer - 1][inner];
			}
		}
		pt.push_back(inside);
        inside.clear();
		cout << endl;
	}

	return pt;
    }
};
