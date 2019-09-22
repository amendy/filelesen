#include<fstream>

// Add a semikolon between the numbers

using namespace std;
int main() {
	// öffnet test.txt zum Schreiben
	// Details: http://www.cplusplus.com/reference/fstream/fstream/fstream/
	fstream file("test.txt", fstream::out);
	for (int i = 0; i < 10; i++)
	{
		if (i != 0)
			file << ", ";
		file << i << flush;
	}
	file.close();// muss wieder geschlossen werden!
	system("pause"); 
	return 0; 
}

/* 

int main ()		
{ 
fstream file( "test.txt" , fstream::out);

for	( int i = 0; i < 10; i++)
{
 if(i !=0)
 file << ", "; 
 file << i << flush; 
}
file.close(); 

}
*/