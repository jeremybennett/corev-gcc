/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_subrotmj(a, b, 2);
}

/* { dg-final { scan-assembler-times "cv\\.subrotmj\\.div4" 1 } } */
