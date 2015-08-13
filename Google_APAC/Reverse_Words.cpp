#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void reverse(char *arr, int start, int end)
{
	if (start >= end)
		return;
	int i = start;
	int j = end;
	while (i < j)
	{
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

void calculate(ofstream& output, char* arr, int len)
{
	int i = 0;
	int j = 0;
	while (i < len)
	{
		j = i;
		while (j < len && arr[j] != ' ')
			j++;
		reverse(arr,i,j-1);
		i = j+1;
	}
	reverse(arr,0,len-1);
	for (int k = 0; k < len; k++)
		output << arr[k];
}


/*
int main(int argc, char** args)
{
	
	int n;
	int index = 1;
	ofstream output("output_B_large.txt");
	ifstream input("B-large-practice.in");
	input >> n;
	input.get();
	while (index <= n)
	{
		cout << "index : " << index << endl;
		char arr[1010];
		input.getline(arr, 1010);
		int len = strlen(arr);

		output << "Case #" << index << ": ";
		calculate(output, arr,len);
		output << endl;
		index++;
	}
	system("pause");
	return 0;


}
*/