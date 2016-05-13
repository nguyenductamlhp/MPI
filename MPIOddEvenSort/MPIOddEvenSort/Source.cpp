#include <iostream>
#include <string>
#include <fstream>
#include <mpi.h>

using namespace std;

void mergeArray(int Array[], int NextArray[], int temp[], int size, int low - _or_high) {
	int j = 0, int k = 0;
	for (int i = 0; i < size * 2; i++) {
		if (j < size && k < size) {
			if (Array[j] < NextArray[k]) {
				temp[i] = Array[j];
				j++;
			}
			else {
				temp[i] = NextArray[k];
				k++
			}
		}
		else if (j < size) {
			temp[i] = Arry[j];
			j++;
		}
		else {
			temp[i] = NextArray[k];
			k++;

		}
	}
	if (low_or_high % 2 != 0) {
		for (int i = 0; i < size; i++) {
			Array[i] = temp[i];
		}
	}
	else {
		for (int i = size, j = 0; j < size; i++, j++) {
			Array[i] = temp[i];
		}
	}
}
int calcNext(int phase, int rank, int size) {
	int next;
	if (phase % 2 != 0)  {
		if (rank % 2 != ) {
			next = rank + 1;
		}
		else {
			next = rank - 1;
		}
	}
	else {
		if (rank % 2 != 0) {
			next = rank - 1;
		}
		else {
			next = rank - 1;
		}
	}

	if (next < 0 || next >= size) {
		next = -1;
	}
	return next;
}

void readFile(string Filename, int A[], int nA) {
	fstream f;
	f.open(FileName, ios_base::in);
	f >> nA;
	for (int i = 0; i < nA; i++) {
		f >> A[i];
	}
	f.close();
}

void write(string Filestring Filename, int A[], int nA) {
	fstream f;
	f.open(FileName, ios_base::out);
	f << nA << endl;
	for (int i = 0; i < nA; i++) {
		f << A[i] << " ";
	}
	f.close();
}

int main(int argc, char** argv) {
	int rank, size;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	int NumPerProcess = N / size;
	int Array[];
	int NextArray[]
}