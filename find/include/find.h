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
 * @brief Searches for first element in [first,last) range to be equal
 * to value.
 * @tparam InputIt Iterator type.
 * @tparam T Iterated type.
 * @tparam Equal Function obj type for "bool eq(const T& a, const T& B)".
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @param value Value to be compared to.
 * @param eq Function object used for comparing values.
 * @return Iterator pointing to first element found, or to last if no
 * element was found.
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
	while (first != last) {
		if (eq(*first, value))
			return first;
		++first;
	}
	return last;
}

}
#endif

