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

	// 1970年
	printf("1970年\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	// "Nishi-Nippori"追加
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (*itr == "Tabata")
		{
			itr = stations.insert(itr, "Nishi-Nippori");
			itr++;
		}
	}

	// 2019年
	printf("\n2019年\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	// "Takanawa Gatway"追加
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (*itr == "Tamachi")
		{
			itr = stations.insert(itr, "Takanawa Gatway");
			itr++;
		}
	}

	// 2022年
	printf("\n2022年\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}
}