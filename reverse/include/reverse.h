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
 * @brief Reverses the order of elements inside [first,last) range.
 * @tparam BidirIt Iterator type.
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @return Void.
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
	--last;
	while (std::distance(first, last) > 0) {
		std::swap(*first, *last);
		++first;
		--last;
	}
}

}
#endif

