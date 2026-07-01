#include "finalProj.h"

enum Operations{
	LD,
	SD,
	LI,
	LW,
	SW,
	ADD,
	ADDI,
	ADDD,
	SUBD,
	SUB,
	MULD,
	DIVD,
	BEQ,
	BNE,
	J	
};

public void exeMemOp(Instruction instructy){
	switch (instructy.type) {
		//floats take 6 cycles (2 EX stage)
		case LD: //load float
			if (instructy.cyclesSoFar == 6){
				instructy.completed = true;
			}
		case SD: //store float
			if (instructy.cyclesSoFar == 6){
				instructy.completed = true;
			}
		case LI: //load immediate
			if (instructy.cyclesSoFar == 5){
				instructy.completed = true;
			}
		//int takes 5 cycles
		case LW: //load int
			if (instructy.cyclesSoFar == 5){
				instructy.completed = true;
			}
		case SW: //store int
			if (instructy.cyclesSoFar == 5){
				instructy.completed = true;
			}
			
	}
}

public void exeALUOp(Instruction instructy){
	switch (instructy.type){
		//integer add takes 1 cycle
		case ADD:
			if (instructy.cyclesSoFar == 5){
				instructy.completed = true;
			}
	
		case ADDI:
			if (instructy.cyclesSoFar == 5){
                                instructy.completed = true;
                        }
		//float add takes 2 cycles
		case ADDD:
			if (instructy.cyclesSoFar == 6){
                                instructy.completed = true;
                        }
		case SUBD:
			if (instructy.cyclesSoFar == 6){
                                instructy.completed = true;
                        }
		//integer sub takes 1 cycles
		case SUB:
			if (instructy.cyclesSoFar == 5){
                                instructy.completed = true;
                        }
		//float mult takes 10 cycles
		case MULD:
			if (instructy.cyclesSoFar == 14){
                                instructy.completed = true;
                        }
		//float division takes 40 cycles
		case DIVD:
			if (instructy.cyclesSoFar == 44){
                                instructy.completed = true;
                        }
	}
}
//this is super wrong for the actually execution and here as a placeholder
public void exeBranchOp(Instruction instructy){
	switch (instructy.type){
		case BEQ:
			if(instructy.cyclesSoFar == 5){
				instructy.completed = true;
			}
		case BNE: 
			if(instructy.cyclesSoFar == 5){
				instructy.completed = true;
			}
		case J:
			if(instructy.cyclesSoFar == 5){
				instructy.completed = true;
			}
	}
}


int main{
	
	return 0
}
