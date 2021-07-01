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
 * @brief Removes duplicated elements from [first,last) range.
 * @tparam InputIt Iterator type.
 * @tparam Equal Function obj type for "bool eq(const T& a, const T& b)".
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @param eq Function object used for comparing values.
 * @return Iterator pointing to position after range's new last element;
 */
 /*
 ok
 */
template<class InputIt, class Equal>
InputIt unique(InputIt first, InputIt last, Equal eq)
{
	while (first != last) {
		InputIt next {first+1};
		while (next != last) {
			if (!eq(*first, *next)) {
				++next;
			} else {
				InputIt tmp {next};
				while (tmp+1 < last) {
					std::swap(*tmp, *(tmp+1));
					++tmp;
				}
				--last;
			}
		}
		++first;
	}
	return last;
}

}
#endif

