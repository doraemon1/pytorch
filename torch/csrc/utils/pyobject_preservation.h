#pragma once

#include <torch/csrc/python_headers.h>
#include <c10/core/impl/PyObjectSlot.h>

// This file contains utilities used for handling PyObject preservation

void clear_slots(PyTypeObject* type, PyObject* self);

PyObject* wrap(c10::impl::PyObjectSlot* slot);
