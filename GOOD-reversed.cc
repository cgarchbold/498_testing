#include <string>

std::string reversed(const std::string &in)
{
	std::string out{};
	out.reserve(in.length());
	for (auto i = in.rbegin(); i != in.rend(); ++i) {
		out += *i;
	}
	return out;
}
