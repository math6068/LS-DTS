/************************************************
** This is a local search solver for Maximum Edge Weight Clique(MEWC).                                                       
************************************************/


/************************************************
** Date:	2016.9.21  
** LMY-GRS (Loca Move Yielded by Greedy and Random Selections)
** Author: Yi Fan, yi.fan4@griffithuni.edu.au   
**		   Institute for Integrated and Intelligent Systems,
**		   Griffith University, 
**		   Brisbane, Australia                         
*************************************************
** Date:        2016.10.10 
** Revison1: Adapt LMY-GRS for Maximum Edge Weight Clique problem.
** Author: Yi Fan, yi.fan4@griffithuni.edu.au   
**		   Institute for Integrated and Intelligent Systems,
**		   Griffith University, 
**		   Brisbane, Australia 
*************************************************
** Date:         2016.11.5
** Revision2: Introduce Deterministic Tournament Selection for selecting edges when 
**           the current candidate solution C becomes empty. The related mode is called DTS_mode and 
**           DTS_Cvoid_mode          
** Author: Zongjie Ma, Yi Fan, zongjie.ma@griffithuni.edu.au
**         Institute for Integrated and Intelligent Systems, Griffith 
**         University, Brisbane, Australia.
                                                
************************************************/

#include <iostream>
#include "localSearch.h"

using namespace std;

int main(int argc, char* argv[])
{
	char filename[1024];
	sscanf(argv[1], "%s", filename);

	int seed;
	sscanf(argv[2], "%d", &seed);
	srand(seed);

	int time_limit;
	sscanf(argv[3], "%d", &time_limit);

	StochasticLocalSearch mySLS(filename, time_limit);
	//mySLS.show_state();


	mySLS.clique_sls();

	mySLS.show_results();

	return 0;
}
