#include "finalProj.h"

public void exeMemOp(Instruction instructy){
	switch (instructy.type) {
		//floats take 6 cycles (2 EX stage)
		case 1: //load float
			if (instructy.cyclesSoFar == 6)
				instructy.completed = true
		case 2: //store float
			if (instructy.cyclesSoFar == 6)
				instructy.completed = true
		case 3: //load immediate
			if (instructy.cyclesSoFar == 5)
				instructy.completed = true
		//int takes 5 cycles
		case 4: //load int
			if (instructy.cyclesSoFar == 5)
				instructy.completed = true
		case 5: //store int
			if (instructy.cyclesSoFar == 5)
				instructy.completed = true
			
	}
}

int main{
	
	return 0
}
