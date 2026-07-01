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

public Instruction readNextInstruction(ifstream inputFile){
	Instruction instruction;
	string line;
	string words[4];
	int count;
       	if(getline(inputFile, line){
		istringstream iss(line);
		string word;

		while(iss >> word){
			words[count] = word;
			count++;
		}
	}
	if(words[0] == "L.D"){
		instruction.type = LD;
		instruction.dest = words[1];
		instruction.src1 = words[2];
	}else if(words[0] == "S.D"){
		instruction.type = SD;
		instruction.dest = words[2];
		instruction.src1 = words[1];
	}else if(words[0] == "LI"){
		instruction.type = LI;
		instruction.dest = words[1];
		instruction.src1 = words[2];
	}else if(words[0] == "LW"){
		instruction.type = LW;
		instruction.dest = words[1];
		instruction.src1 = words[2];
	}else if(words[0] == "SW"){
		instruction.type = SW;
		instruction.dest = words[2];
		instruction.src1 = words[1];
	}else if(words[0] == "ADD"){
		instruction.type = ADD;
		instruction.dest = words[1];
		instruction.src1 = words[2];
		instruction.src2 = words[3];
	}else if(words[0] == "ADDI"){
		instruction.type = ADDI;
                instruction.dest = words[1];
                instruction.src1 = words[2];
                instruction.src2 = words[3];
	}else if(words[0] == "ADD.D"){
		instruction.type = ADDD;
                instruction.dest = words[1];
                instruction.src1 = words[2];
                instruction.src2 = words[3];
	}else if(words[0] == "SUB.D"){
		instruction.type = SUBD;
                instruction.dest = words[1];
                instruction.src1 = words[2];
                instruction.src2 = words[3];
	}else if(words[0] == "SUB"){
		instruction.type = SUB;
                instruction.dest = words[1];
                instruction.src1 = words[2];
                instruction.src2 = words[3];
	}else if(words[0] == "MUL.D"){
		instruction.type = MULD;
                instruction.dest = words[1];
                instruction.src1 = words[2];
                instruction.src2 = words[3];
	}else if(words[0] == "DIV.D"){
		instruction.type = DIVD;
                instruction.dest = words[1];
                instruction.src1 = words[2];
                instruction.src2 = words[3];
	}else if(words[0] == "BEQ"){
		instruction.type = BEQ;
		instruction.dest = words[3];
		instruction.src1 = words[1];
		instruction.src2 = words[2];
	}else if(words[0] == "BNE"){
		instruction.type = BNE;
		instruction.dest = words[3];
		instruction.src1 = words[1];
		instruction.src2 = words[2];
	}else if(words[0] == "J"){
		instruction.type = J;
		instruction.dest = words[1];
	}
	return instruction;

}
int main{
	
	return 0
}
