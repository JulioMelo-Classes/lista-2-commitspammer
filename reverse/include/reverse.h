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
 /*
ok! não precisa documentar quando não tem retorno
 */
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
	--last;
	while (first < last) {
		std::swap(*first, *last);
		++first;
		--last;
	}
}

}
#endif

