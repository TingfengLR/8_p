#include <iostream>
#include <tuple>
#include <vector>
#include <queue>

using namespace std;

class compare
{
public:
	bool operator()(tuple<int, int, vector<vector<int>>> matrixA, tuple<int, int, vector<vector<int>>> matrixB)
	{
		return  get<0>(matrixA) + get<1>(matrixA) > get<0>(matrixB) + get<1>(matrixB);
	}
};
void general_search(vector< vector<int>> matrix, int alnum);
bool goalcheck(vector< vector<int> > matrix);
void expand(tuple<int, int, vector<vector<int>>> node, priority_queue< tuple<int, int, vector<vector<int>>>, vector<tuple<int, int, vector<vector<int>>>>, compare > &nodes, int alnum);
int misp(vector<vector<int>> node);
int manh(vector<vector<int>> node);