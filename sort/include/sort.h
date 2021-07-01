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
 * @brief Sorts elements inside [first,last) range.
 * @tparam ForwardIt Iterator type.
 * @tparam Comparison Function obj type for
 * "bool eq(const T& a, const T& B)".
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @param cmp Function object used for comparing values.
 */
 /*
 ok
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
	ForwardIt start {first};
	while (first != last) {
		ForwardIt first2 {start};
		while (first2 != last) {
			if (!cmp(*first2, *(first2+1)))
				std::swap(*first2, *(first2+1));
			++first2;
		}
		++first;
	}
}

}
#endif

