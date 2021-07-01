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
 * @brief Tells if all elements in [first,last) range meet predicate p.
 * @tparam InputIt Iterator type.
 * @tparam UnaryPredicate Function obj type for "bool p(const T& a)".
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @param p Function object used for checking condition.
 * @return true if all elements meet the condition, or false if not.
 */
 /*
 blz
 */
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
	if (first == last)
		return false;
	while (first != last) {
		if (!p(*first))
			return false;
		++first;
	}
	return true;
}

/*!
 * @brief Tells if any element in [first,last) range meets predicate p.
 * @tparam InputIt Iterator type.
 * @tparam UnaryPredicate Function obj type for "bool p(const T& a)".
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @param p Function object used for checking condition.
 * @return true if any element meets the condition, or false if not.
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
	while (first != last) {
		if (p(*first))
			return true;
		++first;
	}
	return false;
}

/*!
 * @brief Tells if no element in [first,last) range meets predicate p.
 * @tparam InputIt Iterator type.
 * @tparam UnaryPredicate Function obj type for "bool p(const T& a)".
 * @param first Iterator pointing to range's first element.
 * @param last Iterator pointing to position after range's last element.
 * @param p Function object used for checking condition.
 * @return true if no element meets the condition, or false if any does.
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
	while (first != last) {
		if (p(*first))
			return false;
		++first;
	}
	return true;
}

}
#endif

