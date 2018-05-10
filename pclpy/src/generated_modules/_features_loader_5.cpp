
#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
#include "../make_opaque_vectors.hpp"

#include "features/pfhrgb.hpp"
#include "features/ppf.hpp"
#include "features/ppfrgb.hpp"
#include "features/principal_curvatures.hpp"
#include "features/rift.hpp"


void defineFeaturesClasses5(py::module &m) {
    py::module m_features = m.def_submodule("features", "Submodule features");
    defineFeaturesPfhrgbClasses(m_features);
    defineFeaturesPpfClasses(m_features);
    defineFeaturesPpfrgbClasses(m_features);
    defineFeaturesPrincipalCurvaturesClasses(m_features);
    defineFeaturesRiftClasses(m_features);
}