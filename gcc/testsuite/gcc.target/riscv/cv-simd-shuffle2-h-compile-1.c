/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd -mabi=ilp32" } */

int foo1 (int a, int b, int c)
{
	return __builtin_riscv_cv_simd_shuffle2_h(a, b, c);
}

/* { dg-final { scan-assembler-times "cv\\.shuffle2\\.h" 1 } } */
