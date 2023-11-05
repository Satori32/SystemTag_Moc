#include <iostream>
#include <tuple>
#include <cstdint>
#include <string>
#include <vector>

struct SystemTag {
	struct BasicInfo
	{
		std::uint64_t ID=0xdeadbeef;
		double Version = 0.25;
	} BasicInfo;
	
	std::tuple<std::vector<std::uint64_t>, std::uint64_t> ExtraInfo;//if you need the extention to info. yes you can count up to tuples element count. but i am confuse.

};

int main() {
	SystemTag S;

	S.BasicInfo.ID = 0;

	
}