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
 * @brief Searches for first element in [first,last) range to meet
 * predicate p.
 * @tparam InputIt Iterator type.
 * @tparam UnaryPredicate Predicate type for "bool p(const T& a)".
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @param p Function object used for checking condition.
 * @return Iterator pointing to first element found, or to last if no
 * element was found.
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
	while (first != last) {
		if (p(*first))
			return first;
		++first;
	}
	return last;
}

}
#endif

