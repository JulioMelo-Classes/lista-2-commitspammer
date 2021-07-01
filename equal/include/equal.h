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
 * @brief Tells if all elements in [first1,last1) range are equal to all
 * elements in [first2,first2+(last1-first1) range.
 * @tparam InputIt1 Iterator type for first range.
 * @tparam InputIt2 Iterator type for second range.
 * @tparam Equal Function obj type for "bool eq(const T& a, const T& b)".
 * @param first1 Iterator pointing to first range's first element.
 * @param last1 Iterator pointing to position after first range's last
 * element.
 * @param first2 Iterator pointing to second range's first element.
 * @param eq Function object used for comparing values.
 * @return true if both ranges have the same elements, or false if not.
 */
 /*
 ok!
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
	InputIt2 last2 = first2+(last1-first1);
	while ((first1 != last1) && (first2 != last2)) {
		if (!eq(*first1, *first2))
			return false;
		++first1;
		++first2;
	}
	return true;
}

/*!
 * @brief Tells if all elements in [first1,last1) range are equal to all
 * elements in [first2,last2) range.
 * @tparam InputIt1 Iterator type for first range.
 * @tparam InputIt2 Iterator type for second range.
 * @tparam Equal Function obj type for "bool eq(const T& a, const T& b)".
 * @param first1 Iterator pointing to first range's first element.
 * @param last1 Iterator pointing to position after first range's last
 * element.
 * @param first2 Iterator pointing to second range's first element.
 * @param last2 Iterator pointing to position after second range's last
 * element.
 * @param eq Function object used for comparing values.
 * @return true if both ranges have the same elements, or false if not.
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
	if (std::distance(first1, last1) != std::distance(first2, last2))
		return false;
	while ((first1 != last1) && (first2 != last2)) {
		if (!eq(*first1, *first2))
			return false;
		++first1;
		++first2;
	}
	return true;
}

}
#endif

