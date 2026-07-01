#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>

//what functions are neccessary

//iterate through instructions
//read instructions from file
public string readNextInstruction(ifstream Inputfile);

//progress all active functions
public void progressActiveInstructions(vector<int>& active);

//execute load float
//execute store float
//execute load immediate
//execute load int
//execute store int
public void exeMemOp(int operation);

//execute int add
//execute int add w/ immediate
//execute float add
//execute float sub
//execute int sub
//execute float mult
//execute float div
public void exeALUOp(int operation);

//execute jump if equal
//execute jump if not equal
//execute unconditional jump
public void exeBranchOp(int operation);

//load to cache
public void loadCache(Block block);
//read from cache
public float readCache(int location);

//print pipelining stages
//print registers and memory
public void print();

//what classes do we need

//cache struct
	// 8 sets
	// least recently accessed
struct cache{
	Block sets[8];
	Block* LRA;
};

//block struct
	//memory adress
	//value
struct Block{
	int orginalAdress;
	float value;
};

//instruction struct
	//instruction type
	//stage
	//stalled
	//data available
	//completed
struct Instruction{
	int type; //using enumerated strings
	string stage;
	int dest;
	int src1;
	int src2;
	bool stalled;
	bool dataAvailable;
	bool completed;
	int cycleIF;
	int cycleID;
	int cycleEX;
	int cycleMEM;
	int cycleWB;
	int cyclesSoFar;
};
//FP register struct
	//current data
struct FPReg{
	float data;
};
//INT register struct
	//current data
struct IntReg{
	int data;
};
//Main Memory Struct
struct MainMem{
	float data;
};
//other stuff we need

//main memory array
//active instructions vector
//instructions vector
//instruction counter
//cycle counter
//branch predictor (I'm not super sure how to implement this)
