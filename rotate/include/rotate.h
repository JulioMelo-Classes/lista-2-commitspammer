#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*!
 * @brief Rotates elements in [first,last) range until n_first becomes
 * first element.
 * @tparam ForwardIt Iterator type.
 * @param first Iterator pointing to range's first element.
 * @param n_first Iterator pointing to element to be put as first.
 * @param last Iterator pointing to position after range's last element.
 * @return Iterator pointing to original first element.
 */
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
	if (first == n_first)
		return first;
	ForwardIt og_first {first};
	for (int i = 0; i < last - n_first + 1; ++i) {
		ForwardIt tmp {first};
		while (tmp+1 < last) {
			std::swap(*tmp, *(tmp+1));
			++tmp;
		}
		if (og_first < last-1)
			++og_first;
		else
			og_first = first;
	}
	//P.S.: This is inefficient lol
	return og_first;
}

}
#endif

