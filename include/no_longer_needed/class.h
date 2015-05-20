/* This file is included only by the "int main" programs that call class functions externally */

#ifndef __CLASS__
#define __CLASS__

/* standard libraries */
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"
#include "float.h"
#ifdef _OPENMP
#include "omp.h"
#endif

/* tools for class */
#include "quadrature.h"
#include "growTable.h"
#include "arrays.h"
#include "dei_rkck.h"
#include "parser.h"
#include "utility.h"

/* class modules */
#include "common.h"
#include "input.h"
#include "background.h"
#include "thermodynamics.h"
#include "perturbations.h"
#include "perturbations2.h"
#include "threej.h"
#include "bessel.h"
#include "transfer.h"
#include "primordial.h"
#include "spectra.h"
#include "nonlinear.h"
#include "lensing.h"
#include "fisher.h"
#include "output.h"

#endif
