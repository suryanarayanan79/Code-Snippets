class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex > 33 && rowIndex < 0){
            vector<int> no;
            return  no;
        }
vector<vector<int>> pt;
	vector<int> inside;
	for (int outer = 0; outer <= rowIndex; outer++) {
		for (int inner = 0; inner <= outer ; inner++) {
			if (inner == 0 || inner == outer)
			{
				inside.push_back(1);
			}
			else
			{
				inside.push_back(pt[outer - 1][inner - 1] + pt[outer - 1][inner]);
			}
		}
		pt.push_back(inside);
		inside.clear();
	}

	return pt[rowIndex];
    }
};
