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
 * @brief Copies the elements from a [first,last) range to a new range
 * starting at d_first.
 * @tparam InputIt Iterator type.
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @return Iterator pointing to position after the new range's last
 * element.
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
	while (first != last) {
		*d_first = *first;
		++first;
		++d_first;
	}
	return d_first;
}

}
#endif

