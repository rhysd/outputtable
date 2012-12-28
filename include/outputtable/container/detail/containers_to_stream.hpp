#if !defined OUTPUTTABLE_IMPL_CONTAINERS_TO_STREAM_HPP_INCLUDED
#define      OUTPUTTABLE_IMPL_CONTAINERS_TO_STREAM_HPP_INCLUDED

#include <iostream>

namespace output_containers_impl {
    template<class Container>
    void container_to_stream(std::ostream &ost, Container const& c)
    {
        ost << "{ ";
        for(auto const& i : c){
            ost << i << " ";
        }
        ost << '}';
    }
} // namespace output_containers_impl

#endif    // OUTPUTTABLE_IMPL_CONTAINERS_TO_STREAM_HPP_INCLUDED
