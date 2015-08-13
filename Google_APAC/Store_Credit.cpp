#include<iostream>
#include<fstream>
using namespace std;

void calculate(ofstream& output, int *arr, int c, int len)
{
	for (int i = 0; i < len; i++)
		for (int j = i + 1; j < len; j++)
			if (arr[i] + arr[j] == c)
			{
				output << i + 1 << " " << j + 1 ;
				return;
			}
}

/*
int main(int argc, char** args)
{
	int n;	
	int index = 1;
	ofstream output("output.txt");
	ifstream input("A-large-practice.in");
	input >> n;

	while (index <= n)
	{
		int c;
		input >> c;
		int Inumber;
		input >> Inumber;
		int *arr = new int[Inumber];
		for (int i = 0; i < Inumber; i++)
			input >> arr[i];
		
		output << "Case #" << index << ": ";
		calculate(output,arr,c,Inumber);
		output << endl;
		index++;
	}
	system("pause");
	return 0;
}
*/