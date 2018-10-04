# ECS50
//Author: GreatJing TJ
//Date:10/04/2018

#include<iostream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
	
	cout << "You entered the word: ";
	for(int i = 1; i < argc; i++)
	{
		int x = 0;

		stringstream geek(argv[i]);
		geek >> x;

		if(x < 67108865)
		{
			int count = 0;
			while(x > 0){
				x = x / 2;
				count++;
			}
			count--;	
			char alpht = 'a' +  count;
			cout << alpht;
		}
		else
		{
			int count = 0;
			x -= 67108865;
			while(x > 0){
				x = x / 2;
				count++;
			}
			char alpht = 'A' + count;	
			cout << alpht;
		}
	}
	cout << "\n";

	return 0;
}
