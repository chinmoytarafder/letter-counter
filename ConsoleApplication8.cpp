
#include <iostream>
#include <fstream>
#include<iomanip>
// using namespace
using namespace std;

// main function
int main(int argc, char*argv[])
{
	//Showing command line
	cout << argv[0];
	// A string variable to store the name of a file
	string file;
	cout << " ";
	//entering file name
	cin >>  file;
	cout << "**************************************************"
<< "\n********Welcome to my Letter Count Program********" <<
"\n**************************************************" ;

	// creating a ifstream object named textreader
	ifstream textreader;
	// opening the file through the open function
	textreader.open(file);
	//showing output for the file name
	cout << "\nAnalyzing file '"<< file << "'..." << endl;
	// if text_reader get failed it will go through the following order
	if (textreader.fail())
	{
		// showing output for the file that doesn't exist
		cout << "File doesn't exists\n";
	}
	// if the file exist it will maintain the follwing order
	else
	{
		// declaring alphabet as a character
		char alphabet;
		// variables to store letter's count
		int A_count = 0,E_count=0,I_count=0,O_count=0,U_count=0,B_count=0, C_count=0,D_count=0, vowel;

		// until eof is occurred while loop will run 
		while (!textreader.eof() && textreader >> alphabet)
		{
			{
               //if the alphabet is 'a' or 'A' it will go through the folling order
				if (alphabet == 'a' || alphabet == 'A')

				{	// incrementing A's count
					A_count++;
				}
			} {
				//if the alphabet is 'e' or 'E' it will go through the folling order
				if (alphabet == 'e' || alphabet == 'E')

				{	// incrementing E's count
					E_count++;
				}
			}
			
			{
				//if the alphabet is 'i' or 'I' it will go through the folling order
				if (alphabet == 'i' || alphabet == 'I')

				{	// incrementing I's count
					I_count++;
				}
			}
			{
				//if the alphabet is 'o' or 'O' it will go through the folling order
				if (alphabet == 'o' || alphabet == 'O')

				{	// incrementing O's count
					O_count++;
				}
			
			} 
			{
				//if the alphabet is 'u' or 'U' it will go through the folling order
				if (alphabet == 'u' || alphabet == 'U')

				{	// incrementing U's count
					U_count++;
				}
			}
			{
				//if the alphabet is 'b' or 'B' it will go through the folling order
				if (alphabet == 'b' || alphabet == 'B')

				{	// incrementing B's count
					B_count++;
				}
			}
			{
				//if the alphabet is 'c' or 'C' it will go through the folling order
				if (alphabet == 'c' || alphabet == 'C')

				{	// incrementing C's count
					C_count++;
				}
			}
			{
				//if the alphabet is 'd' or 'D' it will go through the folling order
				if (alphabet == 'd' || alphabet == 'D')

				{	// incrementing D's count
					D_count++;
				}
			}
		}
		//calculationg total vowel
		vowel = A_count + E_count + I_count + O_count + U_count;
		// showing output for the number of A
		cout << "\nThe number of A's:" << setfill('.') << right<< setw(35) << A_count<<endl;
		// showing output for the number of E
		cout << "The number of E's:" << setfill('.') << right << setw(35) << E_count << endl;
		// showing output for the number of I
		cout << "The number of I's:" << setfill('.') << right << setw(35) << I_count << endl;
		// showing output for the number of o
		cout << "The number of O's:" << setfill('.') << right << setw(35) << O_count << endl;
		// showing output for the number of U
		cout << "The number of U's:" << setfill('.') << right << setw(35) << U_count << endl;
		// showing output for the total number of B
		cout << "The number of B's:" << setfill('.') << right << setw(35) << B_count << endl;
		// showing output for the total number of C
		cout << "The number of C's:" << setfill('.') << right << setw(35) << C_count << endl;
		// showing output for the total number of D
		cout << "The number of D's:" << setfill('.') << right << setw(35) << D_count << endl;
		// showing output for the total number of vowel
		cout << "The vowel count is:" << setfill('.') << right << setw(34) << vowel << endl;
	}
	
	return 0;
}
