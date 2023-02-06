// ----------------------------------------------------------------------------
//
// Copyright (c) 2019 - 2023 by the OpFlow developers
//
// This file is part of OpFlow-JIT.
//
// OpFlow-JIT is free software and is distributed under the Apache-2.0 license.
// The full text of the license can be found in the file LICENSE at the top
// level directory of OpFlow-JIT.
//
// ----------------------------------------------------------------------------

#ifndef OPFLOW_JIT_MESHPROXY_HPP
#define OPFLOW_JIT_MESHPROXY_HPP

#include "lang/semantic/Field.hpp"
#include "lang/semantic/mesh/MeshLocDescriptor.hpp"

namespace OpFlow::lang {
    class Mesh;

    class MeshProxy {
    public:
        MeshProxy(const Mesh* mesh, MeshLocDescriptor descriptor);

        void place(Field& field);
        void place(FieldGroup& group);

    private:
        MeshLocDescriptor descriptor_;
        const Mesh* mesh_ = nullptr;
    };
}// namespace OpFlow::lang

#endif//OPFLOW_JIT_MESHPROXY_HPP
