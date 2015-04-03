#include <iostream> // header files
#include <fstream> 
using namespace std;

void ReadFunction(char array[][3][10], ifstream &file); // declare functions
void DataFunction(char array[][3][10], ofstream &fout);

int main()
{

	ifstream file; // input file
	file.open("symbols"); // open and read in file

	char Filename[10];
	cout << "Enter output filename" << endl; // ask user to create the name of ouput file
	cin >> Filename;
	ofstream fout; // output file
	fout.open(Filename); // opens output file
	
	char array[10][3][10]; // declare 3-D array

	ReadFunction(array, file);
	DataFunction(array, fout);

	/*for( int i = 0; i < 10; i++ ) // loops through data
	{
		for( int j = 0; j < 3; j++ )
		{
			file >> array[i][j]; // read in all the data
			fout << array[i][j] << " " << endl; // put data into output file
		}
	}*/

	file.close(); // close input file
	fout.close(); // close output file
	
	return 0;
}

// function to read in data
void ReadFunction(char array[][3][10], ifstream &file)
{
	for( int i = 0; i < 10; i++ ) // loops through data
	{
		for( int j = 0; j < 3; j++ )
		{
			file >> array[i][j]; // read in all the data
		}
	} 
}

void DataFunction(char array[][3][10], ofstream &fout) // function to put data into output file
{
	for( int i = 0; i < 10; i++ ) // loops through data
	{
		for( int j = 0; j < 3; j++ )
		{
			fout << array[i][j] << " " << endl; // put data into file
		}
	}
}

	
