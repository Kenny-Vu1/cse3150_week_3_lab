#include "logger.h"
#include <string>
#include <iostream>

using std::string, std::cout, std::endl;
// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity){
    // TODO: throw "Full" if size == capacity, else insert and ++size 
		if(size == capacity){
		throw string("Full");
		}
		else{
			labels[size] = label;
			values[size] = value;
			++size;	
		}
}

void updateValue(double* valuePtr, double newValue){
    // TODO: write through pointer
	*valuePtr = newValue;
}


void printReading(const std::string& label, const double& value){
    // TODO: pretty-print one reading
	cout << label << ": " << value << endl;
}

double average(const double values[], int size){
    // TODO: throw "Empty" if size==0, else compute average
	double avg = 0.0;

	if(size == 0){
		throw std::string("Empty");
	}
	for(int i =0; i<size; i++){
		avg += values[i];
        }
	avg = avg/size;
	
	return avg;
}

double minValue(const double values[], int size){
    // TODO: throw "Empty" if size==0, else compute min
    	double min;
	if(size == 0){
		throw string("Empty");
	}
	min = values[0];
	for(int i =1; i<size; i++){
		if(min > values[i]){
			min = values[i];
		}
	}
	return min;
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
	double max;
        if(size == 0){
        	throw string("Empty");
        }
	max = values[0];
        for(int i =1; i<size; i++){
		if(max < values[i]){
			max = values[i];
		}
        }
        
	return max;
}
