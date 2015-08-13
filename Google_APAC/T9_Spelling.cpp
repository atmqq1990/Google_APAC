#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
using namespace std;

int pos[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
string str[] = {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666",
			"7","77","777","7777","8","88","888","9","99","999","9999"};

void calculate_sp(ofstream& output, char* arr, int len)
{
	
	int i = 0;
	if (arr[i] == ' ')
	{
		output << '0';
		i++;
	}
	else
	{
		output << str[arr[i] - 'a'];
		i++;
	}
	while (i < len)
	{
		if (arr[i] == ' ')
		{
			if (arr[i - 1] != ' ')
				output << '0';
			else
				output << ' ' << '0';
		}
		else if (pos[arr[i] - 'a'] != pos[arr[i - 1] - 'a'])
			output << str[arr[i] - 'a'];
		else
			output<<' '<< str[arr[i] - 'a'];
		i++;
	}


}

/*
int main(int argc, char** args)
{

	int n;
	int index = 1;
	ofstream output("output_C_large.txt");
	ifstream input("C-large-practice.in");
	input >> n;
	input.get();
	while (index <= n)
	{
		cout << "index : " << index << endl;
		char arr[1010];
		input.getline(arr, 1010);
		int len = strlen(arr);

		output << "Case #" << index << ": ";
		calculate_sp(output, arr,len);
		output << endl;
		index++;
	}
	system("pause");
	return 0;


}
*/