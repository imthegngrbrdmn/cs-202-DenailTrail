#include "page_design.h"

void landmark(Character& protag, int& distance)
{
	std::vector<std::pair<int,std::string>landmarks;
	landmarks.push_back(std::make_pair(20,"Big Tree");
	landmarks.push_back(std::make_pair(70,"Gigantic Rock");

	for(auto landmark : landmarks)
	{
		if(landmark.first==distance)
		{
			std::cout<<"You have found a "<<landmark.second<<std::endl;
		}
	}
}
