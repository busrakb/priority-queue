#include "stdafx.h"
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <map>
#include <sstream>
#include <queue>
using namespace std;


template <class Container>
void split(const std::string& str, Container& cont)
{
    std::stringstream iss(str);
    std::copy(std::istream_iterator<std::string>(iss),
         std::istream_iterator<std::string>(),
         std::back_inserter(cont));
}

int main()
{
    stringstream strstream;
    strstream << "bu cumle icinde gecen kelimelerin en uzunu hangi kelime bul";
    string cumle = strstream.str();  
	std::vector<std::string> kelime; 
    split(cumle, kelime);

	priority_queue<string> pq;
	for(int i=0; i < kelime.size() ; i++)
	{
		pq.push(kelime[i]);
	}

	cout<< "paragraftaki en uzun kelime -" << pq.top() << "-dir." << endl;

}