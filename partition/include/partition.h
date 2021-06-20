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
 * @brief Separates elements in [first,last) range between those that
 * meet predicate p and those that don't.
 * @tparam ForwardIt Iterator type.
 * @tparam UnaryPredicate Function obj type for "bool p(const T& a)".
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @param p Function object used for checking condition.
 * @return Iterator pointing to position after last element that meets
 * predicate p.
 */

template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
	int count {0};
	long int max_count {std::distance(first, last)};
	while (first != last && count < max_count) {
		if (!p(*first)) {
			ForwardIt tmp {first};
			while (tmp+1 < last) {
				std::swap(*tmp, *(tmp+1));
				++tmp;
			}
			++count;
		} else {
			++first;
		}
	}
	return first;
}

}
#endif

