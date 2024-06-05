#include <vector>

#define N 5


class HamiltonianCycles
{
public:

	const int n = 5;

	std::vector<int> v{ std::vector<int>(n, 0) };

	const std::vector<int> m{ std::vector<int>(n, n) };

	inline bool rho(const int i);

	std::pair<bool, const int> correct(const int ind);

	bool graph[N][N] = { {0, 1, 0, 1, 0},
						{1, 0, 1, 1, 1},
						{0, 1, 0, 0, 1},
						{1, 1, 0, 0, 1},
						{0, 1, 1, 1, 0} };


	int path[N] = { 0 };

	bool isSafe(const int v, const int pos);

	bool hamCycleUtil(const int pos);

	void print();
};