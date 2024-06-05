
#include <iostream>
#include <chrono>
#include "SolutionExplorer.h"
#include "Queens.h"
#include "SumOfSubsets.h"
#include "GraphColoring.h"
#include "HamiltonianCycles.h"


#define CLASS_NAME HamiltonianCycles

int main()
{
	auto start = std::chrono::steady_clock::now();

	CLASS_NAME Problem;
	
	SolutionExplorer<CLASS_NAME> SE(AlgoTypes::DFS_Iterative, Problem);

	SE.run();

	auto end = std::chrono::steady_clock::now();

	SE.elem()->print();

	std::chrono::duration<double> elapsed_seconds = end - start;

	std::cout << "elapsed time: " << elapsed_seconds.count() << " s" << std::endl;

	return 0;
}


