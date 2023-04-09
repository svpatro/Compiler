#include <iostream>
#include <string>
#include "lexicalAnalyzer.h"

Analyzer::Analyzer(std::string stringToAnalyze){

	this->stringToAnalyze = stringToAnalyze;

}

void Analyzer::print(){

	std::cout << stringToAnalyze << std::endl;

}

void Analyzer::input(std::string){

	

}

