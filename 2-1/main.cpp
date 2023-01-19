#include <stdio.h>
#include <list>
#include <string>

using namespace std;

int main() {
	list<const char*> stations = {
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
		"Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba",
		"Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
		"Tamachi","Hamamatsucho","Shimbashi","Yurakucho"
	};

	// 1970�N
	printf("1970�N\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	// "Nishi-Nippori"�ǉ�
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (*itr == "Tabata")
		{
			itr = stations.insert(itr, "Nishi-Nippori");
			itr++;
		}
	}

	// 2019�N
	printf("\n2019�N\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	// "Takanawa Gatway"�ǉ�
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (*itr == "Tamachi")
		{
			itr = stations.insert(itr, "Takanawa Gatway");
			itr++;
		}
	}

	// 2022�N
	printf("\n2022�N\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}
}