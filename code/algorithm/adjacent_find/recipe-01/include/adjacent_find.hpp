#ifndef MINI_STL_ADJACENT_FIND_INC
#define MINI_STL_ADJACENT_FIND_INC

namespace Hx {

template <typename ForwardIterator>
ForwardIterator adjacent_find(ForwardIterator first, ForwardIterator last)
{
    if (first == last)
        return last;

    ForwardIterator next = first;
    while (++next != last) {
        if (*first == *next)
            return first;
        first = next;
    }
    
    return last;
}

template <typename ForwardIterator, typename BinaryPredicate>
ForwardIterator adjacent_find(ForwardIterator first, ForwardIterator last, BinaryPredicate pred)
{
    if (first == last)
        return last;

    ForwardIterator next = first;
    while (++next != last) {
        if (pred(*first, *next))
            return first;
        first = next;
    }
    
    return last;
}

}   // namespace Hx

#endif
