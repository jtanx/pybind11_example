#include <pybind11/pybind11.h>
#include <string>

void test(const std::string& a, double b) {
    printf("%s %g\n", a.c_str(), b);
}

namespace py = pybind11;

PYBIND11_MODULE(python_example, m) {
    m.def("test", &test, py::arg("a"), py::arg("b"));
    m.def("test2", &test, py::kw_only(), py::arg("a"), py::arg("b"));
}
