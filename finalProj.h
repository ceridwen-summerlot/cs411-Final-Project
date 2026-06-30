#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>

//what functions are neccessary

//iterate through instructions
//read instructions from file
public string readNextInstruction(ifstream Inputfile);

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

//cache class
	// 8 sets
	// least recently accessed
//block class
	//memory adress
	//value
//instruction class
	//instruction type
	//stage
	//stalled
	//data available
	//completed
//FP register struct
	//current data
//INT register struct
	//current data
//other stuff we need

//main memory array
//instruction counter
//cycle counter
//branch predictor (I'm not super sure how to implement this)
