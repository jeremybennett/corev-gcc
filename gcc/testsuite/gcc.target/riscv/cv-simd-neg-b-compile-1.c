/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd -mabi=ilp32" } */

int foo1 (int a)
{
	return __builtin_riscv_cv_simd_neg_b(a);
}

/* { dg-final { scan-assembler-times "cv\\.sub\\.b" 1 } } */
